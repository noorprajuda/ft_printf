/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:27:33 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/24 09:29:29 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	size_t i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int	main(int argc, char const *argv[])
//{
//     char str[] = "abcde";
//     printf("before : %s\n", str);
//     ft_bzero(str, 2);
//     printf("after : %s\n", str);
//     return (0);
// }
