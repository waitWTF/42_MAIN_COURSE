/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:21:59 by thandel           #+#    #+#             */
/*   Updated: 2022/11/29 11:54:08 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (s[i] != '\0')
		i++;
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (const char)c)
			return ((char *)s + i);
		i--;
	}
	return (ptr);
}
/*
int	main(void)
{
	char str[] = "born to code";
	char c;
	char *ptr;

	c = 'o';
	ptr = ft_strrchr(str, c);
	printf("%s\n", ptr);
}*/