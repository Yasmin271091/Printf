/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:20:12 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 21:20:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>

int ft_printf(char const *str, ...)
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putnbr_u(unsigned int n);
int ft_puthex(unsigned int n, char format);
int ft_putptr(unsigned long ptr);
int handle_conversion(va_list args, char specifier);

#endif
