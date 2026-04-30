/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:31:33 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/27 20:17:19 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;
	size_t i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return ((void *)0);
}

// int 	ain(int argc, char const *argv[])
//{
//     char *str = "abcdabcde";
//     char *res = memchr(str, 'c', 3);

//    if (res)
//        printf("Found: %s\n", res);
//    else
//        printf("Not found\n");

//    return 0;
//}
