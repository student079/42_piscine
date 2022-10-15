/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:48:28 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/08/25 15:53:59 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar( char c )
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet( void )
{
	int	i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
}
