/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:24:39 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/28 17:46:09 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/* #include <stdio.h>

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

void	free_list(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst;
		lst = lst->next;
		free(temp);
	}
}
int	main(void)
{
	t_list	*new;
	t_list	*head = ft_lstnew("World");
	t_list	*last_node;
	
	new = head;
	new->next = ft_lstnew("Hello");
	new->next->next = ft_lstnew("How");
	new->next->next->next = ft_lstnew("are");
	new->next->next->next->next = ft_lstnew("you?");
	print_list(head);
	last_node = ft_lstlast(new);
	printf("%s\n", (char *)last_node->content);

	free_list(new);
} */
