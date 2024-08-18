/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:05:20 by ychai             #+#    #+#             */
/*   Updated: 2024/04/17 15:14:12 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h> 

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*temp_str;
	int		count;

	if (s == NULL || len < 0)
		return (NULL);
	if (start > ft_strlen(s) && len > 0)
		start = ft_strlen(s);
	if ((size_t)len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	temp_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!temp_str)
		return (NULL);
	count = 0;
	while (count < len && start < (unsigned int)ft_strlen(s))
	{
		temp_str[count] = s[count + start];
		count++;
	}
	temp_str[count] = '\0';
	return (temp_str);
}