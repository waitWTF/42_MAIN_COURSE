/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:20:16 by thandel           #+#    #+#             */
/*   Updated: 2022/11/17 14:07:52 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*des1;
	const char	*src1;

	des1 = (char *)dest;
	src1 = (const char *)src;
	if ((!dest) && (!src))
		return (NULL);
	while (n > 0)
	{
		*des1++ = *src1++;
		n--;
	}
	return (dest);
}
/*
int	main(void)
{
	char str1[] = "tet";
	char str2[] = "yor";
	
	printf("%s\n", ft_memcpy(str1, str2, 3));
}*/