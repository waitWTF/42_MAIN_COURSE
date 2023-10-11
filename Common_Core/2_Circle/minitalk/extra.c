/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:43:15 by thandel           #+#    #+#             */
/*   Updated: 2023/10/11 12:17:14 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "minitalk.h"

int		g_condi = 1;

void	incoming(void)
{
	ft_printf("received:\n");
	g_condi = 0;
}

void	terminating(size_t *length, size_t *capacity, char **cs)
{
	if (*length > 0)
		write(1, *cs, *length);
	free(*cs);
	*cs = NULL;
	*length = 0;
	*capacity = 0;
	return ;
}

void	free_str(size_t *capacity, char **new_cs, char **cs)
{
	*capacity *= 2;
	*new_cs = (char *)malloc(sizeof(char) * *capacity);
	if (*new_cs == NULL)
		return ;
	ft_strcpy(*new_cs, *cs);
	if (*cs)
		free(*cs);
	*cs = *new_cs;
}

void	build_string(char character)
{
	static char		*cs = NULL;
	static size_t	length = 0;
	static size_t	capacity = 0;
	char			*new_cs;

	if (cs == NULL)
	{
		capacity = 2;
		cs = (char *)malloc(sizeof(char) * capacity);
		if (cs == NULL)
			return ;
		length = 0;
		cs[length] = '\0';
	}
	if (character == '\0' || character == '\n')
	{
		terminating(&length, &capacity, &cs);
		return ;
	}
	if (length + 2 > capacity)
		free_str(&capacity, &new_cs, &cs);
	cs[length] = character;
	length++;
	cs[length] = '\0';
}

void	sig_handler(int signum, siginfo_t *info, void *context)
{
	static unsigned char	character = 0;
	static int				bit_pos = -1;
	pid_t					client_pid;

	client_pid = 0;
	(void)context;
	if (g_condi)
		incoming();
	if (client_pid == 0)
		client_pid = info->si_pid;
	if (bit_pos < 0)
		bit_pos = 7;
	if (signum == SIGUSR1)
		character |= (1 << bit_pos);
	bit_pos--;
	if (bit_pos < 0 && character != 0)
	{
		if (character)
			build_string((char)character);
		character = 0;
		bit_pos = -1;
	}
	kill(client_pid, SIGUSR2);
}
