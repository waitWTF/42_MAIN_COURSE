/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:21:42 by thandel           #+#    #+#             */
/*   Updated: 2022/11/09 10:58:48 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return ((char *)s);
}
/*
int	main(void)
{
    char     s[] = "ich bin ein test";
    char    c;
    char    *ptr;

    c = 'e';
    ptr = ft_strchr(s, c);
    printf("%s\n", ptr);
}*/