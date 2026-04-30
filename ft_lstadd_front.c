/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:41:41 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/29 17:34:39 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
//{
//     t_list *head = NULL;
//     t_list *node1;
//     t_list *node2;

//    node1 = ft_lstnew("I am the old front");
//    ft_lstadd_front(&head, node1);
//    node2 = ft_lstnew("I am the NEW front");
//    ft_lstadd_front(&head, node2);
//    t_list *current = head;
//    while (current != NULL)
//    {
//        printf("Node content: %s\n", (char *)current->content);
//        current = current->next;
//    }

//    return (0);
//}
