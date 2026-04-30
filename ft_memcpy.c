/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:33:45 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/29 18:36:41 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *dst_tmp;
	char *src_tmp;

	if (dst == (void *)0 && src == (void *)0)
	{
		return (dst);
	}
	i = 0;
	dst_tmp = (char *)dst;
	src_tmp = (char *)src;
	while (i < n)
	{
		dst_tmp[i] = src_tmp[i];
		i++;
	}
	return (dst);
}

/*
//ft_memcpy
int main(int argc, char const *argv[])
{

	int a = 1;
	int b = 2;

	printf("memcpy b before : %d\n", b);
	memcpy(&b, &a, sizeof(int));
	printf("memcpy b after : %d\n", b);

	b = 2;

	printf("ft_memcpy b before : %d\n", b);
	ft_memcpy(&b, &a, sizeof(int));
	printf("ft_memcpy b after : %d\n", b);

	return (0);
}
*/