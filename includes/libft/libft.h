/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdantas- <jdantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:45:25 by jdantas-          #+#    #+#             */
/*   Updated: 2023/02/28 14:29:25 by jdantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# include <stdarg.h>

# define HEX_U "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"

size_t	ft_strlen(const char *s);
int		ft_printf(const char *str, ...);
int		check_flag(char flag, va_list arg);
int		print_char(int c);
int		print_str(char *str);
int		print_hex(unsigned long nb, int n);
int		print_int(int n);
int		print_unsigned(unsigned int n);
int		print_pointer(unsigned long ptr);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
