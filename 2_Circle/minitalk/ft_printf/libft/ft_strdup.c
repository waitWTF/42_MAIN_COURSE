/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:27:13 by thandel           #+#    #+#             */
/*   Updated: 2022/11/18 13:28:34 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	dest = malloc(i + 1);
	if (dest != NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			dest[i] = s[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
