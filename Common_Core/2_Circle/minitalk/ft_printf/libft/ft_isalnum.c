/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:38:04 by thandel           #+#    #+#             */
/*   Updated: 2022/10/07 14:47:19 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d is char\n", ft_isalnum('a'));
	printf("%d is num\n", ft_isalnum('3'));
}*/