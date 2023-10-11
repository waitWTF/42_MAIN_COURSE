/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:51:34 by thandel           #+#    #+#             */
/*   Updated: 2022/09/22 20:26:09 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	start;

	i = nb;
	if (i <= 0)
		return (0);
	if (i == 1)
		return (1);
	if (i > 2147395600)
		return (0);
	start = 2;
	if (i >= 2)
	{
		while (start * start <= i)
		{
			if (start * start == i)
				return (start);
			start++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(2147395601));
}
*/