/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:31:09 by thandel           #+#    #+#             */
/*   Updated: 2023/04/28 18:34:31 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*str;
	size_t	size;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (*s1)
		str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

/*
char	*ft_strjoin(char *l_str, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!l_str)
	{
		l_str = (char *)malloc(1 * sizeof(char));
		l_str[0] = '\0';
	}
	if (!l_str || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(l_str) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (l_str)
		while (l_str[++i] != '\0')
			str[i] = l_str[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(l_str) + ft_strlen(buff)] = '\0';
	free(l_str);
	return (str);
}
*/