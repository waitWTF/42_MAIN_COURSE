/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 16:35:58 by thandel           #+#    #+#             */
/*   Updated: 2022/09/11 17:28:13 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*x;
	char	*y;
	char	g[5];
	char	h[5] = "hallo";
	int	i;

	x = g;
	y = h;
	ft_strcpy(x, y);
	i = 0;
	while (i < 5)
	{
		printf("%c", x[i]);
		i++;
	}

	return (0);
}*/
