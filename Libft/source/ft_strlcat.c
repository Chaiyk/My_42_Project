/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:29:35 by ychai             #+#    #+#             */
/*   Updated: 2024/04/15 19:23:03 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	count;
	size_t	rtn_num;

	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	count = 0;
	if (dstsize <= len_dst)
		return (dstsize + ft_strlen(src));
	else
	{
		rtn_num = len_dst + len_src;
		while ((char) src[count] != '\0' && len_dst + 1 < dstsize)
		{
			dst[len_dst] = src[count];
			len_dst++;
			count++;
		}
		dst[len_dst] = '\0';
	}
	return (rtn_num);
}