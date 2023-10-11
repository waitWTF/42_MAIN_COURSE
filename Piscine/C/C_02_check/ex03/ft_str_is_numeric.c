/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:29:21 by thandel           #+#    #+#             */
/*   Updated: 2022/09/13 14:59:35 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x])
	{
		if (str[x] >= '0' && str[x] <= '9')
			x++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i\n", ft_str_is_numeric("135134"));
	printf("%i\n", ft_str_is_numeric("23rf321"));
	printf("%i\n", ft_str_is_numeric(""));
}*/
