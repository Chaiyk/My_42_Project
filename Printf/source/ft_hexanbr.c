/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexanbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:23:50 by ychai             #+#    #+#             */
/*   Updated: 2024/08/13 14:57:11 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	ft_hexanbrlow(unsigned int n)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		i += ft_hexanbrlow(n / 16);
		n %= 16;
	}
	if (n < 16)
	{
		i++;
		ft_putchar(hexa[n]);
	}
	return (i);
}

int	ft_hexanbrup(unsigned int n)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		i += ft_hexanbrup(n / 16);
		n %= 16;
	}
	if (n < 16)
	{
		i++;
		ft_putchar(hexa[n]);
	}
	return (i);
}
