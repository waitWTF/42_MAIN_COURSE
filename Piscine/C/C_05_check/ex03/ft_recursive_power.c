/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:59:23 by thandel           #+#    #+#             */
/*   Updated: 2022/09/22 20:28:32 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if ((nb == 0 || power == 0) && (!(power < 0)))
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
		result = result * ft_recursive_power(nb, (power - 1));
	return (result);
}
/*
int	main(void)
{
	printf("%i\n", ft_recursive_power(3, 2));
}*/