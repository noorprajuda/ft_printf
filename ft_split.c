/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:06:47 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;
	int	inword;

	i = 0;
	count = 0;
	inword = 0;
	while (s[i])
	{
		if (s[i] != c && inword == 0)
		{
			inword = 1;
			count++;
		}
		else if (s[i] == c)
			inword = 0;
		i++;
	}
	return (count);
}

char	**ft_strarr(char const *s, char c, char	**arr)
{
	int		i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			arr[i] = ft_substr(s, 0, len);
			if (!arr[i])
				return ((void *) 0);
			i++;
			s += len;
		}
	}
	arr[i] = ((void *) 0);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (!s)
		return ((void *) 0);
	arr = (char **) malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!arr)
		return ((void *) 0);
	return (ft_strarr(s, c, arr));
}

//int	main(int argc, char const *argv[])
//{
//	char	**res;
//	int		i;

//	res = ft_split("Heilbronn 42", ' ');
//	if (!res)
//		return (0);
//	i = 0;
//	while (res[i])
//	{
//		printf("index [%d] : %s\n", i, res[i]);
//		i++;
//	}
//	return (0);
//}
