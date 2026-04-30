/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:36:21 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/28 12:08:48 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *currentnode;
	t_list *nextnode;

	currentnode = *lst;
	if (!lst || !currentnode || !*lst)
		return;
	while (currentnode)
	{
		nextnode = currentnode->next;
		ft_lstdelone(currentnode, del);
		currentnode = nextnode;
	}
	*lst = ((void *)0);
}

// void del(void *content) {
//     free(content);
// }

// int main() {
//     t_list *head = NULL;

//    // 1. Create list
//    ft_lstadd_back(&head, ft_lstnew(strdup("Node 1")));
//    ft_lstadd_back(&head, ft_lstnew(strdup("Node 2")));
//    ft_lstadd_back(&head, ft_lstnew(strdup("Node 3")));

//    printf("List created.\n");

//    // 2. Clear the list
//    ft_lstclear(&head, del);

//    // 3. Verify
//    if (head == NULL) {
//        printf("ft_lstclear passed: Head is NULL.\n");
//    } else {
//        printf("ft_lstclear failed: Head is not NULL.\n");
//    }

//    return 0;
//}