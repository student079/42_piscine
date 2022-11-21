/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbyeon <hbyeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 10:51:31 by hbyeon            #+#    #+#             */
/*   Updated: 2022/08/28 23:38:32 by hyogshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	error(void);

void	print_middle(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	print_top_bottom(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
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
		if (co_y == 1 || co_y == y)
			print_top_bottom(x);
		else
			print_middle(x);
		ft_putchar('\n');
		co_y++;
	}
}
