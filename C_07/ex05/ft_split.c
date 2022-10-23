/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinsjeon <jinsjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:39:34 by jinsjeon          #+#    #+#             */
/*   Updated: 2022/09/12 20:07:38 by jinsjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char *str, char *charset)
{
	while (*charset)
	{
		if (*str == *charset++)
			return (1);
	}
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_separator(str + i, charset))
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int	i;
	int	w;

	w = 0;
	while (*str)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			w++;
	}
	return (w);
}

char	*ft_wordcpy(char *src, int n)
{
	char	*dest;

	dest = malloc((n + 1) * sizeof(char));
	if (!(dest))
		return (0);
	dest[n] = '\0';
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		size;
	int		i;
	int		n;

	size = ft_wordcount(str, charset);
	arr = malloc((size + 1) * sizeof(char *));
	if (!(arr))
		return (0);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_is_separator(str, charset))
			str++;
		n = ft_wordlen(str, charset);
		arr[i] = ft_wordcpy(str, n);
		if (!(arr[i]))
			return (0);
		str += n;
	}
	arr[size] = 0;
	return (arr);
}
