/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:31:19 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/24 09:31:22 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
//ft_isascii
int main(int argc, char const *argv[])
{
	printf("TEST 1\n");
	printf("isascii result : %d\n", isascii('+'));
	printf("ft_isascii result : %d\n",ft_isascii('+'));

	printf("TEST 2\n");
	printf("isascii result : %d\n", isascii('b'));
	printf("ft_isascii result : %d\n",ft_isascii('b'));

	printf("TEST 3\n");
	printf("isascii result : %d\n", isascii('?'));
	printf("ft_isascii result : %d\n",ft_isascii('?'));

	printf("TEST 4\n");
	printf("isascii result : %d\n", isascii('#'));
	printf("ft_isascii result : %d\n",ft_isascii('#'));

	return (0);
}
*/