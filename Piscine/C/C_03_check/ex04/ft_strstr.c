/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 15:08:19 by thandel           #+#    #+#             */
/*   Updated: 2022/09/18 15:56:05 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[y] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y] && str[x + y] != '\0')
			y++;
		if (to_find[y] == '\0')
			return (str + x);
		x++;
		y = 0;
	}
	return (0);
}
/*
int	main()
{
	char	str1[] = "ichbineintest";
	char	str2[] = "ein";

	printf("%s\n", ft_strstr(str1, str2));
}*/
