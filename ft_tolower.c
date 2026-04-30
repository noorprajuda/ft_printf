/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:29:07 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/23 21:10:33 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += ('a' - 'A');
	return (c);
}

/*
//ft_tolower
int	main(int argc, char const *argv[])
{
	printf("TEST 1\n");
	printf("tolower result : %c\n", tolower('A'));
	printf("ft_tolower result : %c\n",ft_tolower('A'));

	printf("TEST 2\n");
	printf("tolower result : %c\n", tolower('Z'));
	printf("ft_tolower result : %c\n",ft_tolower('Z'));

	printf("TEST 3\n");
	printf("tolower result : %c\n", tolower('b'));
	printf("ft_tolower result : %c\n",ft_tolower('b'));

	printf("TEST 4\n");
	printf("tolower result : %c\n", tolower('3'));
	printf("ft_tolower result : %c\n",ft_tolower('3'));

	return (0);
}
*/