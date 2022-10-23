/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:04:35 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/10 20:04:37 by jinsjeon         ###   ########.fr       */
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

	idx = 0;
	argc -= 1;
	while (idx < argc)
	{
		i = 0;
		while (argv[argc][i])
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
