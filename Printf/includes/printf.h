/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:24:17 by ychai             #+#    #+#             */
/*   Updated: 2024/07/24 13:29:22 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_convertion(char c, va_list array);
int	ft_putchar(char c);
int	ft_putstr(char *c);
int	ft_putnbr(int n);
int	ft_pointer(unsigned long long int n);
int	ft_unsigned(unsigned int n);
int	ft_hexanbrlow(unsigned int n);
int	ft_hexanbrup(unsigned int n);

#endif
