/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdantas- <jdantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:06:03 by jdantas-          #+#    #+#             */
/*   Updated: 2022/10/20 12:08:34 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned long nb, int flag)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i += print_hex((nb / 16), flag);
		i += print_hex((nb % 16), flag);
	}
	else
	{
		if (flag == 'x')
			return (print_char(HEX_L[nb]));
		else
			return (print_char(HEX_U[nb]));
	}
	return (i);
}
