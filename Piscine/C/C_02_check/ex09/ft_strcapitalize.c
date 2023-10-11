/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:13:44 by thandel           #+#    #+#             */
/*   Updated: 2022/09/15 15:32:39 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && str[i] != str[0])
			str[i] += 32;
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] \
				> 'z') && (str[i] < '0' || str[i] > '9'))
			x++;
		if (x > 0 && (str[i] >= 48 && str[i] <= 57))
		{
			i++;
			x = 0;
		}
		if ((x > 0 && str[i] >= 'a' && str[i] <= 'z'))
		{
			x = 0;
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "salut, a comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}
//(str[i] <= 57 && str[i] >= 48))
// && str[i] == (str[i] <= 57 && str[i] >= 48) 
	//	if (str[x] < && x = 0 && str[i] <= 57 && str[i] >= 48= '9' && str[x] >= '0')
	//		str[x] = str[i];
		//if ((str[i] == str[0]) && (str[i] >= 97 && str[i] <= 122))
	//	str[i] -= 32;*/