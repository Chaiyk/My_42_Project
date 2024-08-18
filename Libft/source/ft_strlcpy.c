/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:57:56 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 16:34:29 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strlcpy(char *dst, char const *source, size_t length)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(source);
	if (length <= 0)
		return (src_len);
	while (i < length - 1 && *source != '\0')
	{
		dst[i] = *source;
		i++;
		source++;
	}
	dst[i] = '\0';
	return (src_len);
}