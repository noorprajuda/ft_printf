/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:23:39 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/29 17:32:30 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	size_t ls;
	size_t ld;
	int s;

	i = 0;
	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (dstsize > ld)
	{
		s = ld + ls;
	}
	else
	{
		s = dstsize + ls;
	}
	while (src[i] && (dstsize > ld + 1))
	{
		dst[ld] = src[i];
		i++;
		ld++;
	}
	dst[ld] = '\0';
	return (s);
}

// int	main(int argc, char const *argv[])
//{
//	char 	dst[3] = "xyz";
//	char	src[] = "abc";

//	printf("TEST 1\n");
//	//printf("strlcat result : %lu\n", strlcat(dst, src, 20));
//	printf("ft_strlcat result : %lu\n",ft_strlcat(dst, src, 20));

//	return (0);
//}