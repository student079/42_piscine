/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:38:48 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/01 17:22:23 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if ((unsigned char)str[idx] < ' ' || (unsigned char)str[idx] > '~')
			return (0);
		idx++;
	}
	return (1);
}
