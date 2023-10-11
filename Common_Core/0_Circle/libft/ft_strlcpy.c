/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:20:38 by thandel           #+#    #+#             */
/*   Updated: 2022/11/10 13:36:58 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	x;

	x = 0;
	if (size > 0)
	{
		while (src[x] && x < (size - 1))
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	while (src[x])
		x++;
	return (x);
}
/*
int	main(void)
{
	char *src = "Take565665656 the test. ";
	//  src[0] = 'M' ; // this would be undefined behavior

	char dst[strlen(src) + 1]; // +1 to accomodate for the null terminator
	printf("Das ist DEST : %s\n", dst);
	ft_strlcpy(dst, src, strlen(src));
	printf("src = %s\ndst = %s\n", src, dst);
}*/