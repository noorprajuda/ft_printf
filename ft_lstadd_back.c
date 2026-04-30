/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:04:21 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/28 12:11:30 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (*lst == ((void *)0))
	{
		*lst = new;
		return;
	}
	last = ft_lstlast(*lst);
	if (!last || !new)
		return;
	last->next = new;
}

// int main(void)
//{
//     t_list *head = NULL;
//     t_list *node = ft_lstnew("Test Node");

//    printf("Starting test with empty list...\n");
//    /*
//    ** This will crash because ft_lstlast returns NULL for an empty list,
//    ** then your function tries to do NULL->next = new.
//    */
//    ft_lstadd_back(&head, node);

//    if (head == ((void *) 0))
//        printf("Fail: Head is still NULL\n");
//    else
//        printf("Success: %s\n", (char *)head->content);

//    return (0);
//}
