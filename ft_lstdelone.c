/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:27:05 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst -> content);
	free(lst);
}

//void del_content(void *content)
//{
//    free(content);
//}

//int main(void)
//{
//    t_list *node;
//    char *content;

//    content = strdup("Hello 42");
//    node = ft_lstnew(content);

//    if (!node)
//        return (1);

//    printf("Node created with content: %s\n", (char *)node->content);

//    ft_lstdelone(node, del_content);

//    printf("Node deleted. Use Valgrind to check for leaks!\n");
//    return (0);
//}
