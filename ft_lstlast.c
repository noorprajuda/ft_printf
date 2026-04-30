/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:47:36 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/27 21:58:08 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *tmp;

	tmp = lst;
	if (!lst || !tmp)
		return (0);
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}

// int	main()
//{
//	t_list *l = ft_lstnew("first");
//     l->next = ft_lstnew("second");
//     l->next->next = ft_lstnew("last");
//     t_list *last = ft_lstlast(l);
//     if (last)
//         printf("Last content: %s\n", (char *)last->content);
//     else
//         printf("List is empty\n");
//     if (ft_lstlast(NULL) == NULL)
//         printf("NULL test passed\n");
//	return (0);
// }