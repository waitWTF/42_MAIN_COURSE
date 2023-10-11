/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:56:19 by thandel           #+#    #+#             */
/*   Updated: 2022/09/18 11:44:49 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	c;
	int	val;

	c = 0;
	val = 0;
	while ((s1[c] == s2[c]) && (s1[c] && s2[c]))
		c++;
	val = s1[c] - s2[c];
	return (val);
}

/*int	main()
{
	char	strx[] = "test";
	char	stry[] = "tewt";
	printf("%d", ft_strcmp(strx, stry));
}*/