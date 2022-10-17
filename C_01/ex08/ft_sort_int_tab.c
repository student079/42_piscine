/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:01:46 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/29 19:27:06 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;
	int	j;
	int	temp;

	idx = 0;
	j = 0;
	while (idx < size - 1)
	{
		j = idx + 1;
		while (j < size)
		{
			if (tab[idx] > tab[j])
			{
				temp = tab[idx];
				tab[idx] = tab[j];
				tab[j] = temp;
			}
		j++;
		}
	idx++;
	}
}
