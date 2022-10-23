/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:24:07 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/12 15:23:36 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*arr;
	int			i;
	long long	long_min;
	long long	long_max;

	long_min = min;
	long_max = max;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (long_max - long_min));
	if (!arr)
		return (0);
	i = 0;
	while (min < max)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
