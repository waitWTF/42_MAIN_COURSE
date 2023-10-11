/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:21:41 by thandel           #+#    #+#             */
/*   Updated: 2022/09/11 15:47:46 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	sort;

	x = 0;
	while (x < (size - 1))
	{
		y = 0;
		while (y < (size - 1))
		{
			if (tab[y] > tab[y + 1])
			{
				sort = tab[y + 1];
				tab[y + 1] = tab[y];
				tab[y] = sort;
			}
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	int	size;
	int	tab[5] = {4, 0, 9, 1, 5};

	size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", \
			tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
