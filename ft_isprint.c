/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:18:34 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/23 21:10:52 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
//ft_isprint
int	main(int argc, char const *argv[])
{
	printf("TEST 1\n");
	printf("isprint result : %d\n", isprint('\t'));
	printf("ft_isprint result : %d\n",ft_isprint('\t'));

	printf("TEST 2\n");
	printf("isprint result : %d\n", isprint('\v'));
	printf("ft_isprint result : %d\n",ft_isprint('\v'));

	printf("TEST 3\n");
	printf("isprint result : %d\n", isprint('?'));
	printf("ft_isprint result : %d\n",ft_isprint('?'));

	printf("TEST 4\n");
	printf("isprint result : %d\n", isprint('3'));
	printf("ft_isprint result : %d\n",ft_isprint('3'));

	return (0);
}
*/