/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:16:34 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/23 21:11:05 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
//ft_digit
int	main(int argc, char const *argv[])
{
	printf("TEST 1\n");
	printf("isdigit result : %d\n", isdigit('A'));
	printf("ft_isdigit result : %d\n",ft_isdigit('A'));

	printf("TEST 2\n");
	printf("isdigit result : %d\n", isdigit('b'));
	printf("ft_isdigit result : %d\n",ft_isdigit('b'));

	printf("TEST 3\n");
	printf("isdigit result : %d\n", isdigit('?'));
	printf("ft_isdigit result : %d\n",ft_isdigit('?'));

	printf("TEST 4\n");
	printf("isdigit result : %d\n", isdigit('3'));
	printf("ft_isdigit result : %d\n",ft_isdigit('3'));

	return (0);
}
*/