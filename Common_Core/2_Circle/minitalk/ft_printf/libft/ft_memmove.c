/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:20:27 by thandel           #+#    #+#             */
/*   Updated: 2022/11/17 12:06:43 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*des1;
	const char	*src1;
	int			i;

	i = 0;
	des1 = (char *)dest;
	src1 = (const char *)src;
	if ((!dest) && (!src))
		return (NULL);
	if (dest < src)
	{
		while (n > 0)
		{
			des1[i] = src1[i];
			n--;
			i++;
		}
	}
	else
	{
		while (n--)
			*(des1 + n) = *(src1 + n);
	}
	return (dest);
}
/*
int	main(void)
{
	char str1[] = "old";
	char str2[] = "new";
	int i;
	char *ptr;

	i = 3;
	printf("%s, %s\n", str1, str2);
	ptr = ft_memmove(str1, str2, i);
	printf("%s\n", ptr);
}*/