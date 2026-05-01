/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:30:37 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ls2;
	int		ls1;
	char	*ptr;
	int		i;
	int		j;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	ptr = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!ptr)
		return ((void *) 0);
	i = 0;
	while (ls1--)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (ls2--)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

//int	main(int argc, char const *argv[])
//{
//	printf("res : %s", ft_strjoin("Heilbronn","42"));
//	return (0);
//}