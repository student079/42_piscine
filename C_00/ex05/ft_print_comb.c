/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:01:46 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/28 11:58:16 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_last_com(int n1, int n2, int n3)
{
	if (n1 != 55 || n2 != 56 || n3 != 57)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	print(int n1, int n2, int n3)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
}

void	ascend(int n1, int n2, int n3)
{
	while (n1 <= 57)
	{
		n2 = n1 + 1;
		while (n2 <= 57)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{	
				if (n1 == n2 || n2 == n3 || n3 == n1)
				{
					n3++;
					continue ;
				}
				else
				{
					print(n1, n2, n3);
				}
				print_last_com(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 48;
	n2 = 49;
	n3 = 50;
	ascend(n1, n2, n3);
}
