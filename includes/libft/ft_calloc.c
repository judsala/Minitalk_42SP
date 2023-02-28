/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdantas- <jdantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:03:59 by jdantas-          #+#    #+#             */
/*   Updated: 2023/02/28 13:04:01 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	result;

	result = count * size;
	p = (void *)malloc(result);
	if (result / count != size || result / size != count || !result)
		return (NULL);
	ft_bzero(p, result);
	return (p);
}
