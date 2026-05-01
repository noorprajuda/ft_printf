/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:40:40 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (void *)0;
	while (*s)
	{
		if (*s == (char) c)
		{
			return ((char *) s);
		}
		s++;
	}
	if ((char) c == '\0')
		return ((char *) s);
	return ((char *) t);
}

//int	main()
//{
//    char s[] = "abcdabcde";
//    char *res = ft_strchr(s, 'c');
//    printf("result : %s", res);
//    return (0);
//}