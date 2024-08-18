/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:22:38 by ychai             #+#    #+#             */
/*   Updated: 2024/08/13 15:53:46 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*temp_str;
	unsigned int	i_main;
	unsigned int	i_sub;

	if (!s1 && !s2)
		return (NULL);
	temp_str = ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (temp_str)
	{
		i_main = 0;
		i_sub = 0;
		while (s1 && *(s1 + i_sub))
			temp_str[i_main++] = s1[i_sub++];
		i_sub = 0;
		while (s2 && *(s2 + i_sub))
			temp_str[i_main++] = s2[i_sub++];
		temp_str[i_main] = '\0';
	}
	return (temp_str);
}
