/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:39:59 by thandel           #+#    #+#             */
/*   Updated: 2022/09/13 18:08:04 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 97 && str[c] <= 122)
		{
			str[c] -= 32;
		}
		c++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "adkjfadf";
	printf("%s\n", ft_strupcase(str));
}*/
