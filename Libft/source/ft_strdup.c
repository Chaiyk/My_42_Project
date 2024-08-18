/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:15:30 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 13:09:02 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strdup(const char *str)
{
	char	*temp_ptr;
	int		count;

	count = 0;
	temp_ptr = (char *)malloc (ft_strlen(str) + 1);
	if (!temp_ptr)
		return (0);
	while (str[count] != '\0')
	{
		temp_ptr[count] = str[count];
		count++;
	}
	temp_ptr[count] = '\0';
	return (temp_ptr);
}