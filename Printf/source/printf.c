/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:21:13 by ychai             #+#    #+#             */
/*   Updated: 2024/08/13 14:59:14 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	ft_printf(const char *str, ...)
{
	va_list	arr;
	int		i;
	int		len;

	va_start(arr, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_convertion(str[i], arr);
		}
		else
		{
			len += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(arr);
	return (len);
}

int	ft_convertion(char c, va_list array)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(array, int));
	else if (c == 's')
		len = ft_putstr(va_arg(array, char *));
	else if (c == 'p')
		len = ft_pointer(va_arg(array, unsigned long long int));
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(array, int));
	else if (c == 'u')
		len = ft_unsigned(va_arg(array, unsigned int));
	else if (c == 'x')
		len = ft_hexanbrlow(va_arg(array, unsigned int));
	else if (c == 'X')
		len = ft_hexanbrup(va_arg(array, unsigned int));
	else if (c == '%')
		len = ft_putchar('%');
	else
		return (0);
	return (len);
}
