/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:11:07 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/15 13:56:19 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	word_len(int nbr, int blen)
{
	long long	temp;
	int			len;

	temp = nbr;
	len = 0;
	if (temp < 0)
	{
		temp *= -1;
		len++;
	}
	while (temp >= blen)
	{
		temp /= blen;
		len++;
	}
	len += 1;
	return (len);
}

char	*ft_getnbr_base(int nbr, char *base, int idx)
{
	int			len;
	long long	big_nbr;
	char		*temp;

	temp = malloc(sizeof(char) * idx + 1);
	if (!(temp))
		return (0);
	big_nbr = nbr;
	len = len_base(base);
	if (big_nbr < 0)
		big_nbr *= -1;
	temp[idx--] = '\0';
	while (big_nbr >= len)
	{
		temp[idx--] = base[big_nbr % len];
		big_nbr /= len;
	}
	temp[idx] = base[big_nbr];
	if (nbr < 0)
		temp[0] = '-';
	return (temp);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		m_len;
	int		i_nbr;
	char	*temp;

	if (len_base(base_from) == 0 || len_base(base_from) == 1
		|| len_base(base_to) == 0 || len_base(base_to) == 1)
		return (0);
	i_nbr = ft_atoi_base(nbr, base_from);
	m_len = word_len(i_nbr, len_base(base_to));
	temp = ft_getnbr_base(i_nbr, base_to, m_len);
	return (temp);
}
