/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:20:36 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/04/29 17:52:14 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list *ft_lstnew(void *content)
{
	t_list *el;

	el = malloc(sizeof(t_list));
	if (!el)
		return ((void *)0);
	el->content = content;
	el->next = ((void *)0);
	return (el);
}

// int	main(int argc, char const *argv[])
//{
//	char	*str = "Heilbronn 42";
//	t_list	*node;

//	node = ft_lstnew(str);
//	if(!node)
//		printf("Fail : Node is NULL\n");
//	if(node -> content != str)
//		printf("Fail : content pointer mismatch\n");
//	else if (ft_strncmp(node -> content, "Heilbronn 42", 13) != 0)
//		printf("Fail : content value mismatch\n");
//	else
//		printf("Success : content is correct\n");
//	if (node -> next != ((void *) 0))
//		printf("Fail : next is not NULL\n");
//	else
//		printf("Success : next is NULL\n");
//	free(node);
//	return (0);
//}
