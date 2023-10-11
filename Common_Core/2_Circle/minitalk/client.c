/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:56:51 by thandel           #+#    #+#             */
/*   Updated: 2023/10/11 12:18:52 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <signal.h>

int		g_bin = 0;

void	received(int signum)
{
	if (signum == SIGUSR2)
		g_bin++;
}

void	send_char(int pid, char char_bit)
{
	int	pos;
	int	val;

	if (kill(pid, 0) == -1 || char_bit == 0)
		exit(1);
	pos = 7;
	while (pos >= 0)
	{
		val = g_bin;
		if (char_bit >> pos & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (val == g_bin)
		{
		}
		pos--;
	}
}

int	main(int argc, char *argv[])
{
	int	s_pid;
	int	message_char;

	if (argc != 3)
	{
		ft_printf("Wrong format '[./client] [pid] [message]'\n");
		exit(1);
	}
	message_char = 0;
	s_pid = ft_atoi(argv[1]);
	if (s_pid <= 0)
	{
		ft_printf("PID not working!\n");
		exit(1);
	}
	signal(SIGUSR2, &received);
	signal(SIGUSR1, &received);
	while (argv[2][message_char])
	{
		send_char(s_pid, argv[2][message_char]);
		message_char++;
	}
	send_char(s_pid, '\n');
	return (0);
}
