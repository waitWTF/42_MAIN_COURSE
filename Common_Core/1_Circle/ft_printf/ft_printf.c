/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thandel <thandel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:42:05 by thandel           #+#    #+#             */
/*   Updated: 2023/03/18 13:35:30 by thandel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	print_l;

	print_l = 0;
	if (format == 'c')
		print_l += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_l += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_l += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_l += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_l += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_l += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_l += ft_printpercent();
	return (print_l);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	va_list		args;
	int			print_l;

	i = 0;
	print_l = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_l += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_l += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_l);
}
