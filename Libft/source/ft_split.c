/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:07:17 by ychai             #+#    #+#             */
/*   Updated: 2024/04/17 16:22:28 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_check_len(char const *s, char c)
{
	if (!ft_strchr(s, c))
		return (ft_strlen(s));
	return (ft_strchr(s, c) - s);
}

int	ft_count(char const *s, char const c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		len;
	size_t	arr_count;

	if (!s)
		return (NULL);
	arr = (char **)malloc ((ft_count(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	len = 0;
	arr_count = 0;
	while (*s)
	{
		while (*s == c && s)
			s++;
		if (*s)
		{
			len = ft_check_len(s, c);
			arr[arr_count++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	arr[arr_count] = NULL;
	return (arr);
}