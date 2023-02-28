/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdantas- <jdantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:52:03 by jdantas-          #+#    #+#             */
/*   Updated: 2022/10/24 12:39:40 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(unsigned long ptr)
{
	int	i;

	i = 0;
	if (!ptr)
	{
		i += write (1, "(nil)", 5);
		return (i);
	}
	else
	{
		i += write (1, "0x", 2);
		i += print_hex(ptr, 'x');
	}
	return (i);
}
