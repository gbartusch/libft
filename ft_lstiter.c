/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:08:44 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/29 15:36:13 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/* void to_uppercase(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        if ('a' <= *str && *str <= 'z')
            *str -= 32; // Convert lowercase to uppercase
        str++;
    }
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

    printf("Before applying ft_lstiter:\n");
    print_list(new);

    ft_lstiter(new, to_uppercase);

    printf("After applying ft_lstiter:\n");
    print_list(new);

    // Free allocated memory
    ft_lstclear(&new, free);

    return 0;
} */