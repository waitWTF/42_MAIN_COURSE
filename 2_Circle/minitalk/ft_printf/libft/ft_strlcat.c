/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:20:54 by thandel           #+#    #+#             */
/*   Updated: 2022/11/14 13:43:02 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;
	size_t	c;

	c = 0;
	if (!dst && size == 0)
		return (0);
	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size == 0 || dlen >= size)
		return (slen + size);
	while (src[c] && c < (size - dlen - 1))
	{
		dst[dlen + c] = src[c];
		c++;
	}
	dst[dlen + c] = '\0';
	return (slen + dlen);
}
/*
int	main(void)
{
	char src[] = "ABCDEFGHIJKLMNOPQRSTOVWXYZ";
	char dest[] = "XY";

	printf("%li\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
}
*/
/*
	size_t	i;
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (size != 0)
	{
		while (dst[d] != '\0' && d < size)
			d++;
		i = 0;
		while (src[i] != '\0' && d + i + 1 < size)
		{
			dst[i + d] = src[i];
			i++;
		}
		if (d != size)
			dst[i + d] = '\0';
	}
	return (d + s);
*/