/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdantas- <jdantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:33:10 by jdantas-          #+#    #+#             */
/*   Updated: 2022/10/25 09:31:59 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define HEX_U "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

int	ft_printf(const char *str, ...);
int	check_flag(char flag, va_list arg);
int	print_char(int c);
int	print_str(char *str);
int	print_hex(unsigned long nb, int n);
int	print_int(int n);
int	print_unsigned(unsigned int n);
int	print_pointer(unsigned long ptr);

#endif
