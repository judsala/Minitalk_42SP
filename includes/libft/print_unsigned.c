/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdantas- <jdantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:52:17 by jdantas-          #+#    #+#             */
/*   Updated: 2022/10/25 09:31:26 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	utoa_len(unsigned int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	print_unsigned(unsigned int n)
{
	int		size;
	char	*result;

	size = utoa_len(n);
	result = (char *)malloc(size + 1);
	if (!result)
		return (0);
	result[size] = 0;
	while (size > 0)
	{
		result[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	size = print_str(result);
	free (result);
	return (size);
}
