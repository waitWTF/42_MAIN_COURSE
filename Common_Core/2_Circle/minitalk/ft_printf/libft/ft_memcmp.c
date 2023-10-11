/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:23:17 by thandel           #+#    #+#             */
/*   Updated: 2022/11/18 11:16:25 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	x;

	x = 0;
	while (0 < n)
	{
		if (*(unsigned char *)(s1 + x) < *(unsigned char *)(s2 + x))
			return (-1);
		else if (*(unsigned char *)(s1 + x) > *(unsigned char *)(s2 + x))
			return (1);
		x++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_memcmp("hello", "hello", 0));
}*/