/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:29:51 by thandel           #+#    #+#             */
/*   Updated: 2022/10/11 13:12:37 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	*x;
	char	*y;
	char stringa[6] = "test";
	char stringb[6] = "hunger";
	int	p;

	x = stringa;
	y = stringb;
	ft_strncpy(x, y, 4);
	p = 0;
	while (p < 6)
	{
		printf("%c", x[p]);
		p++;
	}
	return (0);
}
