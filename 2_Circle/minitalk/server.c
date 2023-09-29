#include "./ft_printf/Includes/ft_printf.h"
#include "./ft_printf/libft/libft.h"
#include "signal.h"

unsigned char	g_gelen = 0;

// void	fill_string(unsigned char c)
// {
// 	int	i;

// 	i = 0;
// 	while (c[i] != '\0')
// 	{
// 		;
// 	}
// }

void	sig_handler(int sig, siginfo_t *si, void *undelete)
{
	(void)undelete;

	static int	bit = 0;

	if (bit == 0)
		g_gelen = 0;
	g_gelen <<= 1;
	if (sig == SIGUSR2)
		g_gelen += 1;
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", g_gelen);
		bit = 0;
		kill(si->si_pid, SIGUSR1);
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	sg;

	pid = getpid();
	sg.sa_flags = SA_SIGINFO;
	sg.sa_sigaction = sig_handler;
	sigaction(SIGUSR1, &sg, NULL);
	sigaction(SIGUSR2, &sg, NULL);
	ft_printf("pid : %d\n", pid);
	while (1)
		;
}