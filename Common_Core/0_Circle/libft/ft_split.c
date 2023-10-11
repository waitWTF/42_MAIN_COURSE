/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:40:31 by thandel           #+#    #+#             */
/*   Updated: 2022/11/29 12:02:07 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_c(char const *s, char c);
static char	**put_array(char **array, int count, char const *s, char c);
static char	*get_str(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**array;

	if (!s)
		return (NULL);
	count = count_c(s, c);
	array = malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	array = put_array(array, count, s, c);
	return (array);
}

static int	count_c(char const *s, char c)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	while (s[z])
	{
		if (s[z] != c && i == 0)
			i++;
		if (s[z] == c && s[z + 1] != c && s[z + 1] != '\0')
			i++;
		z++;
	}
	return (i);
}

static char	**put_array(char **array, int count, char const *s, char c)
{
	int		i;
	size_t	z;
	char	*tmp;

	i = -1;
	while (++i < count)
	{
		tmp = get_str(s, c);
		array[i] = (char *)malloc(sizeof(char) * (ft_strlen(tmp) + 1));
		if (!array[i])
			return (NULL);
		z = -1;
		while (++z < ft_strlen(tmp))
			array[i][z] = tmp[z];
		array[i][z] = '\0';
		if (!(i == count - 1))
		{
			while (*s == c)
				s++;
			s += ft_strlen(tmp) + 1;
		}
		free(tmp);
	}
	array[i] = NULL;
	return (array);
}

static char	*get_str(char const *s, char c)
{
	char	*tmp;
	char	*str;
	int		len;
	int		i;

	while (*s == c)
		s++;
	tmp = ft_strchr(s, c);
	if (!tmp)
		len = ft_strlen(s);
	else
		len = tmp - s;
	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = *s++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	char str[] = "Yor Anja";
	printf("[%s]\n", str, ' ');
	return (0);
}*/
