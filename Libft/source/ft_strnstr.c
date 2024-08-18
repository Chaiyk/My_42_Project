/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 08:52:43 by ychai             #+#    #+#             */
/*   Updated: 2024/04/17 13:28:08 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *main, const char *set, size_t len)
{
	size_t	i;
	size_t	match;

	i = 0;
	match = 0;
	if (!(*set))
		return ((char *) main);
	else if (len == 0)
		return (NULL);
	while (main[i] != '\0' && (i + match) < len)
	{
		if (match == ft_strlen(set))
			return ((char *)main + i);
		else if (main[i + match] == set [match])
			match++;
		else
		{
			match = 0;
			i++;
		}
	}
	if (match == ft_strlen(set))
		return ((char *)main + i);
	else
		return (NULL);
}