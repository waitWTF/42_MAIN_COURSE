/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:30:50 by thandel           #+#    #+#             */
/*   Updated: 2022/09/13 16:38:29 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] >= 32 && str[x] <= 126)
			x++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%i\n", ft_str_is_printable("adfa"));
	printf("%i\n", ft_str_is_printable("'\v'"));
	printf("%i\n", ft_str_is_printable(""));
}*/