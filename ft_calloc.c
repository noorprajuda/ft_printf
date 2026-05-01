/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:29:38 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && size > SIZE_MAX / count)
		return ((void *) 0);
	ptr = malloc(count * size);
	if (!ptr)
		return ((void *)0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

//int	main(int argc, char const *argv[])
//{
//	int *ptr = (int *)ft_calloc(5, sizeof(int));
//    if (ptr == NULL) {
//        printf("ptr NULL ");
//        exit(0);
//    }
//    for (int i = 0; i < 5; i++)
//        printf("%d ", ptr[i]);
//    return (0);
//}
