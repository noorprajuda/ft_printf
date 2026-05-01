/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:29:00 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		count;

	tmp = lst;
	count = 0;
	if (!tmp)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}

//int	main(int argc, char const *argv[])
//{
//	t_list	*test;
//	int		size;

//	test = ((void *) 0);
//	size = ft_lstsize(test);
//	printf("Empty list size : %d (Expected : 0)\n", size);
//	while(test)
//	{
//		t_list *tmp = test;
//		test = test -> next;
//		free(tmp);
//	}
//	return (0);
//}
