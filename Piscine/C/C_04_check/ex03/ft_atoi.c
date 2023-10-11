/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:51:00 by thandel           #+#    #+#             */
/*   Updated: 2022/09/21 10:54:54 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	c;
	int	sign;
	int	num;

	c = 0;
	sign = 1;
	num = 0;
	while (str[c] && (str[c] == ' ' || str[c] >= 9 && str[c] <= 13))
		c++;
	while (str[c] && (str[c] == '-' || str[c] == '+'))
	{
		if (str[c] == '-')
			sign = -sign;
		c++;
	}
	while (str[c] && (str[c] >= 48 && str[c] <= 57))
	{
		num = num * 10 + (str[c] - 48);
		c++;
	}
	return (sign * num);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("  ---+--+1234ab567"));
}*/