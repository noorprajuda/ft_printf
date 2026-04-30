/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:34:16 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/23 21:10:22 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= ('a' - 'A');
	return (c);
}

/*
//ft_toupper
int	main(int argc, char const *argv[])
{
	printf("TEST 1\n");
	printf("toupper result : %c\n", toupper('A'));
	printf("ft_toupper result : %c\n",ft_toupper('A'));

	printf("TEST 2\n");
	printf("toupper result : %c\n", toupper('Z'));
	printf("ft_toupper result : %c\n",ft_toupper('Z'));

	printf("TEST 3\n");
	printf("toupper result : %c\n", toupper('b'));
	printf("ft_toupper result : %c\n",ft_toupper('b'));

	printf("TEST 4\n");
	printf("toupper result : %c\n", toupper('3'));
	printf("ft_toupper result : %c\n",ft_toupper('3'));

	return (0);
}
*/