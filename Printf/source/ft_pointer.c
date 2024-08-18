/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:23:59 by ychai             #+#    #+#             */
/*   Updated: 2024/08/13 14:57:24 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	ft_pointer(unsigned long long int n)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		i += ft_pointer(n / 16);
		n %= 16;
	}
	if (n < 16)
	{
		if (i == 0)
		{
			ft_putstr("0x");
			i += 2;
		}
		i++;
		ft_putchar(hexa[n]);
	}
	return (i);
}
