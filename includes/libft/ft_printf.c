/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdantas- <jdantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:34:02 by jdantas-          #+#    #+#             */
/*   Updated: 2022/10/25 10:38:04 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_flag(char flag, va_list arg)
{
	if (flag == 'c')
		return (print_char(va_arg(arg, int)));
	if (flag == 's')
		return (print_str(va_arg(arg, char *)));
	if (flag == 'd' || flag == 'i')
		return (print_int(va_arg(arg, int)));
	if (flag == 'X' || flag == 'x')
		return (print_hex(va_arg(arg, unsigned int), flag));
	if (flag == 'u')
		return (print_unsigned(va_arg(arg, unsigned int)));
	if (flag == 'p')
		return (print_pointer(va_arg(arg, unsigned long)));
	else
		return (print_char('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;

	i = 0;
	if (!str)
		return (-1);
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
		{			
			str++;
			i += check_flag(*str, list);
		}
		else
		{
			i += print_char(*str);
		}
		str++;
	}
	va_end (list);
	return (i);
}
