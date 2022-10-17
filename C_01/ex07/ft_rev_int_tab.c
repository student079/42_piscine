/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:38:26 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/29 14:56:50 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	idx;
	int	temp;

	i = size - 1;
	idx = 0;
	while (idx < size / 2)
	{
		temp = tab[idx];
		tab[idx++] = tab[i];
		tab[i--] = temp;
	}
}
