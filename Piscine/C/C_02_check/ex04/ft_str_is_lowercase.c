/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:17:33 by thandel           #+#    #+#             */
/*   Updated: 2022/09/13 15:21:43 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	l;

	l = 0;
	if (str[l] == '\0')
		return (1);
	while (str[l] != '\0')
	{
		if (str[l] <= 'z' && str[l] >= 'a')
			l++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i\n", ft_str_is_lowercase("adfadsf"));
	printf("%i\n", ft_str_is_lowercase("AFEAGA"));
	printf("%i\n", ft_str_is_lowercase(""));
}*/
