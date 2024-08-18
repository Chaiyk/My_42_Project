/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:17:50 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:04:24 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dst;
	char	*temp_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (&dst[0] < &src[0])
		return (ft_memcpy(dst, src, len));
	temp_dst = (char *)dst;
	temp_src = (char *)src;
	while (len > 0)
	{
		temp_dst[len - 1] = temp_src[len - 1];
		len--;
	}
	return (dst);
}
