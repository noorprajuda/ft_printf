/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:48:51 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/23 21:11:27 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_isalpha(int c);
int ft_isdigit(int c);

int ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

/*
//ft_isalnum
int main(int argc, char const *argv[])
{
	printf("TEST 1\n");
	printf("isalnum result : %d\n", isalnum('A'));
	printf("ft_isalnum result : %d\n",ft_isalnum('A'));

	printf("TEST 2\n");
	printf("isalnum result : %d\n", isalnum('b'));
	printf("ft_isalnum result : %d\n",ft_isalnum('b'));

	printf("TEST 3\n");
	printf("isalnum result : %d\n", isalnum('?'));
	printf("ft_isalnum result : %d\n",ft_isalnum('?'));

	printf("TEST 4\n");
	printf("isalnum result : %d\n", isalnum('#'));
	printf("ft_isalnum result : %d\n",ft_isalnum('#'));

	return (0);
}
*/