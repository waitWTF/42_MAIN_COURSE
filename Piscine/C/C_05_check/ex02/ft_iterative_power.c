/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:27:27 by thandel           #+#    #+#             */
/*   Updated: 2022/09/22 20:27:38 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	if ((nb == 0 || power == 0) && (!(power < 0)))
		return (1);
	else if (power < 0)
	{
		return (0);
	}
	else if (power > 0)
	{
		i = 1;
		while (i < power)
		{
			i++;
			result = result * nb;
		}
		return (result);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_power(0, 2));
}*/