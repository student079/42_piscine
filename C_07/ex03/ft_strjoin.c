/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:40:43 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/13 13:21:47 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	join_len(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	len;

	len = 0;
	j = 0;
	while (j < size)
	{
		i = 0;
		k = 0;
		while (strs[j][i])
		{
			i++;
			len++;
		}
		j++;
		while (sep[k] && j != size - 1)
		{
			k++;
			len++;
		}
	}
	return (len);
}

int	join(int size, char *joinedstr, char *sep, char **strs)
{
	int	i;
	int	j;
	int	k;
	int	idx;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		idx = 0;
		while (strs[j][i])
			joinedstr[k++] = strs[j][i++];
		while (sep[idx] && j != size -1)
		{
			joinedstr[k] = sep[idx];
			idx++;
			k++;
		}
		j++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joinedstr;
	int		k;

	k = 0;
	joinedstr = (char *)malloc(sizeof(char) * join_len(size, strs, sep) + 1);
	if (!(joinedstr))
		return (0);
	k = join(size, joinedstr, sep, strs);
	joinedstr[k] = '\0';
	return (joinedstr);
}
