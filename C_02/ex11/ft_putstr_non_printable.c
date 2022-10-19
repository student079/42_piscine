/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:52:46 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/31 11:23:17 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(int temp)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[temp / 16]);
	ft_putchar(hex[temp % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	idx;
	int	temp;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] < ' ' || str[idx] > '~')
		{
			ft_putchar('\\');
			temp = (unsigned char)str[idx];
			ft_put_hex(temp);
		}
		else
		{
			ft_putchar(str[idx]);
		}
		idx++;
	}
}
