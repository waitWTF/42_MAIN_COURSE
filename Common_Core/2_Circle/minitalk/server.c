/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:57:36 by thandel           #+#    #+#             */
/*   Updated: 2023/10/11 12:17:59 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "minitalk.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = src[i];
	return (dest);
}

int	main(void)
{
	int					pid;
	struct sigaction	sg;

	pid = getpid();
	sg.sa_sigaction = &sig_handler;
	sg.sa_flags = SA_SIGINFO;
	sigemptyset(&sg.sa_mask);
	if (sigaction(SIGUSR1, &sg, NULL) < 0)
	{
		ft_printf("Couldn't register signal handler!\n");
		return (1);
	}
	sigaction(SIGUSR2, &sg, NULL);
	ft_printf("pid : %d\n", pid);
	while (1)
		;
}
