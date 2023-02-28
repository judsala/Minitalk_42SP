/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdantas- <jdantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:06:33 by jdantas-          #+#    #+#             */
/*   Updated: 2022/10/25 09:31:52 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	nbr_len(char *s, int n, size_t size)
{
	s[size] = '\0';
	size--;
	if (n >= 0)
	{
		while (size)
		{
			s[size] = (n % 10) + '0';
			n = n / 10;
			size--;
		}
		s[size] = n + '0';
	}
	else
	{
		while (size)
		{
			s[size] = (n % 10) * -1 + '0';
			n = n / 10;
			size--;
		}
		s[size] = '-';
	}
}

int	print_int(int n)
{
	char	*result;
	size_t	size;
	int		t;

	if (n >= 0)
		size = 1;
	else
		size = 2;
	t = n / 10;
	while (t)
	{
		size++;
		t = t / 10;
	}
	result = malloc(size + 1);
	if (!result)
		return (0x0);
	nbr_len(result, n, size);
	print_str(result);
	free (result);
	return (size);
}
