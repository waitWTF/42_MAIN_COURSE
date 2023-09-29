/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:31:59 by thandel           #+#    #+#             */
/*   Updated: 2022/11/29 11:45:30 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(size_t nbr)
{
	size_t	i;

	i = 0;
	if (nbr == 0)
		i++;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i + 1);
}

static char	*ft_putstr(int min, size_t nbr, int i)
{
	char	*str;

	str = malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	if (min)
		str[0] = '-';
	str[--i] = '\0';
	if (nbr == 0 && i--)
		str[i] = '0' + 0;
	while (nbr > 0 && i--)
	{
		str[i] = '0' + nbr % 10;
		nbr = nbr / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long long int	nbr;
	int				minus;
	int				i;
	char			*str;

	if (!n && n != 0)
		return (0);
	nbr = n;
	i = 0;
	minus = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		i++;
		minus++;
	}
	i = i + ft_count(nbr);
	str = ft_putstr(minus, nbr, i);
	return (str);
}
