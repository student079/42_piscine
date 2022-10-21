/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:10:11 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/01 20:15:20 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	to_arr(int *arr, int nb)
{
	int	i;

	i = 0;
	while (nb >= 10)
	{
		arr[i] = nb % 10;
		nb /= 10;
		i++;
	}
	arr[i] = nb;
	return (i);
}

void	ft_putnbr(int nb)
{
	int	arr[10];
	int	idx;

	idx = 0;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	idx = to_arr(arr, nb);
	while (idx >= 0)
	{
		ft_putchar(arr[idx] + '0');
		idx--;
	}
}
