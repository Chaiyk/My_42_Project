/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:46:02 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:18:03 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *str, int chr, int n)
{
	int		count;

	count = 0;
	while (count < n)
	{
		if (((unsigned char *)str)[count] == (unsigned char)chr)
			return (&((void *)str)[count]);
		count++;
	}
	return (0);
}
