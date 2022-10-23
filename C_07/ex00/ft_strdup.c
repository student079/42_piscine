/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:15:02 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/12 15:14:11 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
