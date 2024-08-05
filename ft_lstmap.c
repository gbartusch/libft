/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:17:42 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/08/05 11:39:42 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static t_list	*mapnewnode(t_list *lst, void *(*f)(void *))
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = (*f)(lst->content);
	new->next = NULL;
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = mapnewnode(lst, f);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* void *to_uppercase(void *content)
{
    char *str = strdup((char *)content);
	if (!str)
        return NULL;

	char	*ptr = str;
    while (*ptr)
    {
        if ('a' <= *ptr && *ptr <= 'z')
            *ptr -= 32; // Convert lowercase to uppercase
        ptr++;
    }
	return str;
}

void del(void *content)
{
    free(content);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *new;
    t_list *head;

    head = ft_lstnew(strdup("hello"));
    new = head;
    new->next = ft_lstnew(strdup("world"));
    new->next->next = ft_lstnew(strdup("how"));
    new->next->next->next = ft_lstnew(strdup("are"));
    new->next->next->next->next = ft_lstnew(strdup("you"));

    printf("Original list:\n");
    print_list(new);

    // Map the function to the list
    t_list *new_list = ft_lstmap(new, to_uppercase, del);

    // Print the new list
    printf("Mapped list:\n");
    print_list(new_list);

    // Free allocated memory
    ft_lstclear(&new, del);
    ft_lstclear(&new_list, del);

    return 0;
} */