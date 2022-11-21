/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:38:04 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/28 23:35:33 by hyogshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	error(void);

void	print_top(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('/');
		else if (i == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
}

void	print_bottom(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('\\');
		else if (i == x)
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
}

void	print_m(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int	co_y;

	co_y = 1;
	if (x <= 0 || y <= 0)
	{
		error();
		return ;
	}
	while (co_y <= y)
	{
		if (co_y == 1)
			print_top(x);
		else if (co_y == y)
			print_bottom(x);
		else
			print_m(x);
		co_y++;
		ft_putchar('\n');
	}
}
