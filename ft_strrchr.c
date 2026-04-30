/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:45:30 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/24 09:47:25 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_strrchr(const char *s, int c)
{
	char *t;

	t = (void *)0;
	while (*s)
	{
		if (*s == (char)c)
		{
			t = (char *)s;
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)t);
}

// int	main()
//{
//     char s[] = "abcdabcde";
//     char *res = ft_strrchr(s, 'c');
//     printf("result : %s", res);
//     return (0);
// }