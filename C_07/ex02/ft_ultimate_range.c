/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:06:36 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/12 15:52:05 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int			i;
	long long	long_min;
	long long	long_max;

	long_min = min;
	long_max = max;
	i = 0;
	if (min >= max)
	{
		(*range) = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (long_max - long_min));
	if (!(*range))
		return (-1);
	while (min < max)
	{
		(*range)[i] = min++;
		i++;
	}
	return (i);
}
