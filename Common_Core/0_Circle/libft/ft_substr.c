/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:30:32 by thandel           #+#    #+#             */
/*   Updated: 2022/11/29 12:11:00 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;

	if (!s)
		return (0);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if ((size_t)len > ft_strlen(s))
		len = ft_strlen(s);
	if (!s)
		return (0);
	s = s + start;
	s1 = malloc(len + 1);
	if (s1 == 0)
		return (0);
	ft_memcpy(s1, s, len);
	s1 += len;
	*s1 = '\0';
	return (s1 - len);
}
