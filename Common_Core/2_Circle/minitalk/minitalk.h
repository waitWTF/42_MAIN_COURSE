/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:42:36 by thandel           #+#    #+#             */
/*   Updated: 2023/10/11 11:32:18 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strcpy(char *dest, const char *src);
void	terminating(size_t *length, size_t *capacity, char **cs);
void	free_str(size_t *capacity, char **new_cs, char **cs);
void	build_string(char character);
void	sig_handler(int signum, siginfo_t *info, void *context);
void	incoming(void);

#endif