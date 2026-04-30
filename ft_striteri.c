/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 01:36:21 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/27 18:28:48 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	make_upper_if_even(unsigned int i, char *c)
//{
//	if (i % 2 == 0)
//		*c = toupper((unsigned char)*c);
// }

// int	main()
//{
//	char	str[] = "hello world";

//	printf("Before: %s\n", str);
//	ft_striteri(str, make_upper_if_even);
//	printf("After:  %s\n", str);

//	if (strcmp(str, "HeLlO WoRlD") == 0)
//		printf("Test Passed!\n");
//	else
//		printf("Test Failed!\n");
//	return (0);
//}
