/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:33:29 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/30 12:52:54 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	mv_arr(char *temp, int nb, int idx)
{
	while (1)
	{
		if (nb < 10)
		{
			temp[idx] = nb;
			break ;
		}
		temp[idx++] = nb % 10;
		nb = nb / 10;
	}
	return (idx);
}

void	ft_putnbr(int nb)
{
	int				idx;
	char			temp[10];

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	idx = 0;
	idx = mv_arr(temp, nb, idx);
	while (idx >= 0)
	{
		ft_putchar(temp[idx--] + 48);
	}
}
