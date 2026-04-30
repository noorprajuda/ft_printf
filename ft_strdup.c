/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:42:40 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/29 18:46:00 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_strdup(const char *s1)
{
	char *dup;
	size_t l;
	size_t i;

	l = ft_strlen(s1);
	dup = (char *)malloc(l + 1);
	if (!dup)
		return ((void *)0);
	i = 0;
	while (i <= l)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}

// int main(int argc, char const *argv[])
//{
//    const char *s1 = "abc";
//    char *cpy = ft_strdup(s1);
//     if(cpy != NULL)
//     {
//         printf("res ft_strdup : %s\n", cpy);
//         free(cpy);
//     }
//     return 0;
// }
