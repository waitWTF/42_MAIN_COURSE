/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:19:11 by thandel           #+#    #+#             */
/*   Updated: 2022/11/14 12:21:33 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *src)
{
	size_t	c;

	c = 0;
	if (src[c] == '\0')
		return (0);
	while (src[c] != '\0')
		c++;
	return (c);
}
/*
int	main(void)
{
	printf("%li\n", ft_strlen("test"));
}*/