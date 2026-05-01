/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnoorpra <mnoorpra@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:35:46 by mnoorpra          #+#    #+#             */
/*   Updated: 2026/05/01 10:21:21 by mnoorpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*content;

	if (!lst || !f || !del)
		return ((void *) 0);
	newlst = ((void *) 0);
	while (lst)
	{
		content = (*f)(lst -> content);
		newnode = ft_lstnew(content);
		if (!newnode)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return ((void *) 0);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst -> next;
	}
	return (newlst);
}

//void del(void *content) {
//    free(content);
//}

//void *map_f(void *content) {
//    char *str = strdup((char *)content);
//    int i = 0;
//    while (str[i]) {
//        str[i] = toupper(str[i]);
//        i++;
//    }
//    return (str);
//}

//void print_list(t_list *lst) {
//    while (lst) {
//        printf("%s -> ", (char *)lst->content);
//        lst = lst->next;
//    }
//    printf("NULL\n");
//}

//int main() {
//    t_list *list = ft_lstnew(strdup("hello"));
//    ft_lstadd_back(&list, ft_lstnew(strdup("world")));

//    printf("Original: ");
//    print_list(list);

//    t_list *mapped = ft_lstmap(list, map_f, del);

//    printf("Mapped:   ");
//    print_list(mapped);

//    ft_lstclear(&list, del);
//    ft_lstclear(&mapped, del);
//    return (0);
//}