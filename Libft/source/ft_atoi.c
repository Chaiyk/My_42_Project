/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychai <ychai@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:44:18 by ychai             #+#    #+#             */
/*   Updated: 2024/04/16 17:16:34 by ychai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	count;
	int	rtn_num;
	int	neg_num;

	count = 0;
	rtn_num = 0;
	neg_num = 1;
	while (str[count] == '\t' || str[count] == '\v' || str[count] == '\f'
		|| str[count] == '\r' || str[count] == ' ' || str[count] == '\n')
		count++;
	if (str[count] == '-')
		neg_num = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		rtn_num = rtn_num * 10 + str[count] - '0';
		count++;
	}
	return (rtn_num * neg_num);
}