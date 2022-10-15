/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:44:19 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/28 20:29:45 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_last_com(int n, int *check)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (check[i] == i)
		{
			i++;
			continue ;
		}
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
			break ;
		}
	}
}

void	dfs(int fir, int digit, int n, int *check)
{
	int	i;

	i = 0;
	if (digit == n)
	{	
		print_last_com(n, check);
		while (i < n)
		{
			ft_putchar(check[i] + 48);
			i++;
		}
	}
	else
	{
		i = fir;
		while (i < 10)
		{
			check[digit] = i;
			i++;
			dfs(i, digit + 1, n, check);
		}
	}
}

void	ft_print_combn(int n)
{
	int	check[10];

	dfs(0, 0, n, check);
}
