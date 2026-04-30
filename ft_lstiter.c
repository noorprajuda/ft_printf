/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:23:58 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/28 11:35:39 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// void print_content(void *content)
//{
//     printf("Node content: %s\n", (char *)content);
// }

// void toupper_content(void *content)
//{
//     char *str = (char *)content;
//     while (*str)
//     {
//         if (*str >= 'a' && *str <= 'z')
//             *str -= 32;
//         str++;
//     }
// }

// int main(void)
//{
//     t_list *head = ft_lstnew(ft_strdup("one"));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("two")));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("three")));

//    printf("Before Iteration:\n");
//    ft_lstiter(head, print_content);

//    ft_lstiter(head, toupper_content);

//    printf("\nAfter modification (toupper):\n");
//    ft_lstiter(head, print_content);

//    return (0);
//}