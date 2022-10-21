/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:58:37 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/11 22:54:36 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	test(int *table, int x, int y)
{
	int	i;

	i = -1;
	while (++i < x)
	{
		if (y == table[i] || (i + table[i]) == (x + y)
			|| (i - table[i]) == (x - y))
			return (0);
	}
	return (1);
}

void	puzzle_recur(int *table, int *cnt, int pos)
{
	int	i;
	int	i2;

	if (pos == 10)
	{
		*cnt += 1;
		i2 = -1;
		while (++i2 < 10)
			ft_putchar(table[i2] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (test(table, pos, i))
			{
				table[pos] = i;
				puzzle_recur(table, cnt, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	table[10];
	int	i;
	int	cnt;

	i = -1;
	while (++i < 10)
		table[i] = -1;
	cnt = 0;
	puzzle_recur(table, &cnt, 0);
	return (cnt);
}
