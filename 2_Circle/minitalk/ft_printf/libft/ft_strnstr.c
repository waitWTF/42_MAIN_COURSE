/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:36:23 by thandel           #+#    #+#             */
/*   Updated: 2022/11/18 11:32:03 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	x;
	size_t	y;
	char	*tbig;

	x = 0;
	tbig = (char *)big;
	if (lit[0] == '\0')
		return (tbig);
	if (!len)
		return (0);
	while (tbig[x] != '\0' && x < len)
	{
		y = 0;
		while (tbig[x + y] == lit[y] && x + y < len)
		{
			if (lit[y + 1] == '\0')
				return (tbig + x);
			y++;
		}
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	const char *lstr = "Foo Bar Baz";
	const char *sstr = "Bar";
	char *ptr;

	ptr = ft_strnstr(lstr, sstr, 12);
	printf("%s\n", ptr);
	return (0);
}*/