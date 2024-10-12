/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:27:43 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/31 21:12:14 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/* #include <stdio.h>
#include <string.h>

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

void	del(void	*content)
{
	free(content);
}

int main(void)
{
	t_list	*new;
	t_list	*head = ft_lstnew(strdup("World"));
	
	new = head;
	new->next = ft_lstnew(strdup("Hello"));
	new->next->next = ft_lstnew(strdup("How"));
	new->next->next->next = ft_lstnew(strdup("are"));
	new->next->next->next->next = ft_lstnew(strdup("you?"));
	
	print_list(new);
	ft_lstclear(&new, del);
	print_list(new);
} */
