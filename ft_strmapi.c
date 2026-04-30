/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 01:53:51 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/29 18:31:32 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *res;

	if (!s || !f)
		return ((void *)0);
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return ((void *)0);
	i = 0;
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	my_test_map(unsigned int i, char c)
//{
//	return (c + i);
// }

// int	main(void)
//{
//	char	*str = "0000";
//     char	*result;

//    result = ft_strmapi(str, my_test_map);
//    if (result == NULL)
//    {
//        printf("Memory allocation failed\n");
//        return (1);
//    }
//    // Expected output for "0000": '0'+0, '0'+1, '0'+2, '0'+3 => "0123"
//    printf("Original: %s\n", str);
//    printf("Mapped:   %s\n", result);

//    free(result);
//    return (0);
//}