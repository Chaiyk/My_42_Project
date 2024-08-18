/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:06:23 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 16:20:40 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(char const *str1, char const *str2, int len)
{
	int	count;

	count = 0;
	while (count < len && str1[count] != '\0' && str2[count] != '\0')
	{
		if (str1[count] != str2[count])
			return ((unsigned char)str1[count] - (unsigned char)str2[count]);
		count++;
	}
	if (count < len && (str1[count] != '\0' || str2[count] != '\0'))
		return ((unsigned char) str1[count] - (unsigned char) str2[count]);
	else if (len < 0)
		return (-1);
	else
		return (0);
}