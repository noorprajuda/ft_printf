/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 21:20:51 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char *) s1;
	u2 = (unsigned char *) s2;
	i = 0;
	while ((u1[i] != '\0' || u2[i] != '\0') && (i < n))
	{
		if (!(u1[i] == u2[i]))
			return (u1[i] - u2[i]);
		i++;
	}
	return (0);
}

//int	main(int argc, char const *argv[])
//{
//	printf("%d", strncmp("abc", "abd", 2));
//	return (0);
//}
