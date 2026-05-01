/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:45:38 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - '0';
		i++;
	}
	r *= s;
	return (r);
}

/*
//ft_atoi
int main(int argc, char const *argv[])
{
	printf("TEST 1\n");
	printf("atoi result : %d\n", atoi("+123456"));
	printf("ft_atoi result : %d\n",ft_atoi("+123456"));

	printf("TEST 2\n");
	printf("atoi result : %d\n", atoi("-2147483648"));
	printf("ft_atoi result : %d\n",ft_atoi("-2147483648"));

	printf("TEST 3\n");
	printf("atoi result : %d\n", atoi("1234adsnds"));
	printf("ft_atoi result : %d\n",ft_atoi("1234adsnds"));

	printf("TEST 4\n");
	printf("atoi result : %d\n", atoi("geeksforgeeks"));
	printf("ft_atoi result : %d\n",ft_atoi("geeksforgeeks"));

	printf("TEST 5\n");
	printf("atoi result : %d\n", atoi("12.56"));
	printf("ft_atoi result : %d\n",ft_atoi("12.56"));

	printf("TEST 6\n");
	printf("atoi result : %d\n", atoi("123456"));
	printf("ft_atoi result : %d\n",ft_atoi("123456"));

	return (0);
}
*/