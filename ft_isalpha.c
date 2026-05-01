/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:13:25 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
//ft_isalpha
int	main(int argc, char const *argv[])
{
	printf("TEST 1\n");
	printf("isalpha result : %d\n", isalpha('A'));
	printf("ft_isalpha result : %d\n",ft_isalpha('A'));

	printf("TEST 2\n");
	printf("isalpha result : %d\n", isalpha('b'));
	printf("ft_isalpha result : %d\n",ft_isalpha('b'));

	printf("TEST 3\n");
	printf("isalpha result : %d\n", isalpha('?'));
	printf("ft_isalpha result : %d\n",ft_isalpha('?'));

	printf("TEST 4\n");
	printf("isalpha result : %d\n", isalpha('3'));
	printf("ft_isalpha result : %d\n",ft_isalpha('3'));

	return (0);
}
*/