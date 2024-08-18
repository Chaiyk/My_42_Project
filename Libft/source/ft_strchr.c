/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:35:04 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 16:07:28 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *str, int chr)
{
	int	count;

	count = 0;
	while (str[count] != (char)chr)
	{
		if (str[count] == '\0')
			return (NULL);
		count++;
	}
	return ((char *)str + count);
}