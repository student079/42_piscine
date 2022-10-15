/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:17:22 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/29 14:42:59 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int stn1, int stn2, int idx1, int idx2)
{
	ft_putchar(stn1);
	ft_putchar(stn2);
	ft_putchar(' ');
	ft_putchar(idx1);
	ft_putchar(idx2);
	if (stn1 == 57 && stn2 == 56 && idx1 == 57 && idx2 == 57)
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	back_num(int stn1, int stn2, int idx1, int idx2)
{
	while (1)
	{
		if (idx2 > 57)
		{
			idx1++;
			idx2 = 48;
		}
		if (idx1 > 57)
			break ;
		print(stn1, stn2, idx1, idx2);
		idx2++;
	}
}

void	ft_print_comb2(void)
{	
	int	num1;
	int	num2;
	int	idx1;
	int	idx2;

	num1 = 48;
	num2 = 48;
	while (1)
	{
		idx1 = num1;
		idx2 = num2 + 1;
		back_num(num1, num2, idx1, idx2);
		num2++;
		if (num2 > 57)
		{
			num1++;
			num2 = 48;
		}
		if (num1 == 57 && num2 == 57)
			break ;
	}	
}
