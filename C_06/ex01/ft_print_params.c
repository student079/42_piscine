/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:59:04 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/04 15:59:06 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	idx;
	int	i;

	idx = 1;
	while (idx < argc)
	{
		i = 0;
		while (argv[idx][i])
		{
			ft_putchar(argv[idx][i]);
			i++;
		}
		ft_putchar('\n');
		idx++;
	}
	return (0);
}
