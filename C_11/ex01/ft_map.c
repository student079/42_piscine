/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 22:11:31 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/12 20:52:33 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*temp;

	i = 0;
	temp = malloc(sizeof(int) * length);
	if (!(temp))
		return (0);
	while (i < length)
	{
		temp[i] = (*f)(tab[i]);
		i++;
	}
	return (temp);
}
