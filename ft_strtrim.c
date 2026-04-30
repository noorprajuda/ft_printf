/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:29:16 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/29 16:49:09 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_inset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int ft_startidx(char const *s1, char const *set)
{
	int i;
	int start;

	i = 0;
	start = -1;
	while (s1[i] && (start < 0))
	{
		if (!(ft_inset(s1[i], set)))
		{
			start = i;
		}
		i++;
	}
	return (start);
}

int ft_endidx(char const *s1, char const *set)
{
	int len;
	int end;
	int j;

	len = ft_strlen(s1);
	end = -1;
	j = len - 1;
	while ((j >= 0) && (end < 0))
	{
		if (!(ft_inset(s1[j], set)))
		{
			end = j;
		}
		j--;
	}
	return (end);
}

char *ft_strcpy(char const *s1, int start, char *cpy, int cpy_len)
{
	int k;

	k = 0;
	while (k < cpy_len)
	{
		cpy[k] = s1[start];
		k++;
		start++;
	}
	cpy[k] = '\0';
	return (cpy);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *cpy;
	int cpy_len;

	if (!s1)
		return ((void *)0);
	if (!(set))
		return (ft_strdup(s1));
	start = ft_startidx(s1, set);
	if (start == -1)
		return (ft_strdup(""));
	end = ft_endidx(s1, set);
	cpy_len = (end - start + 1);
	cpy = (char *)malloc(cpy_len + 1);
	if (!cpy)
		return ((void *)0);
	return (ft_strcpy(s1, start, cpy, cpy_len));
}

// int	main(int argc, char const *argv[])
//{
//	printf("res : %s", ft_strtrim("ababinsidebbab", ""));
//	return (0);
// }
