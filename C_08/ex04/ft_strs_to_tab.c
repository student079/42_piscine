/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:42:32 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/13 15:49:09 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
		idx++;
	return (idx);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		idx;

	idx = 0;
	str = (char *)malloc(sizeof(char *) * ft_strlen(src) + 1);
	if (!(str))
		return (0);
	while (src[idx])
	{
		str[idx] = src[idx];
		idx++;
	}
	str[idx] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(arr))
		return (NULL);
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
