/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:26:58 by ychai             #+#    #+#             */
/*   Updated: 2024/08/13 14:58:08 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	ft_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_unsigned(n / 10);
		n %= 10;
	}
	if (n < 10)
	{
		i++;
		ft_putchar(n + 48);
	}
	return (i);
}
