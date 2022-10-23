/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:52:39 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/11 19:44:32 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc != 1)
		return (0);
	i = 0;
	while (argv[0][i])
		ft_putchar(argv[0][i++]);
	ft_putchar('\n');
	return (0);
}
