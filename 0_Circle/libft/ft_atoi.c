/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:36:34 by thandel           #+#    #+#             */
/*   Updated: 2022/11/18 10:52:25 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int						i;
	int						minus;
	unsigned long long int	res;

	i = 0;
	res = 0;
	minus = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			minus = minus * (-1);
		i++;
	}
	while ((nptr[i] >= '0') && (nptr[i] <= '9') && (nptr[i] != '\0'))
	{
		res = res * 10 + (nptr[i] - 48);
		if (res > 9223372036854775807)
			return ((minus != -1) * (-1));
		i++;
	}
	return (res * minus);
}
/*
int	main(void)
{
	char str[] = " -5456";
	int val = ft_atoi(str);
	printf("%d\n", val);
	return (0);
}*/