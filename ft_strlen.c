/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:43:55 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/29 18:37:40 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int main(int argc, char const *argv[])
//{
//	char myStr[20] = "Hello World";
//	printf("strlen : %zu\n", strlen(myStr));
//	printf("ft_strlen : %zu\n", ft_strlen(myStr));
//	return 0;
// }
