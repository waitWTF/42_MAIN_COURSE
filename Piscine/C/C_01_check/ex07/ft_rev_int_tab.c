/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:36:20 by thandel           #+#    #+#             */
/*   Updated: 2022/09/11 15:49:05 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	x = 0;
	while (x < (size / 2))
	{
		swap = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = swap;
		x++;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[6] = {0, 1, 2, 3, 4, 5};

	size = 6;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", \
			tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}*/
