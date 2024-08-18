/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:01:05 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 16:21:00 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(char *str, int chr)
{
	int		count;
	char	*temp;

	count = 0;
	temp = 0;
	while (str[count] != '\0')
	{
		if (str[count] == (char)chr)
			temp = str + count;
		count++;
	}
	if (chr == '\0')
		temp = str + count;
	if (temp == 0)
		return (0);
	else
		return (temp);
}