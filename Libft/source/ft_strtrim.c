/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:50:19 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:49:15 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*temp_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	if (start > end)
		return (ft_strdup(s1 + (end + 1)));
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	temp_str = malloc(end - start + 2);
	if (temp_str == NULL)
		return (NULL);
	ft_strlcpy(temp_str, s1 + start, end - start + 2);
	return (temp_str);
}