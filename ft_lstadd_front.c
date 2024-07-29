/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:54:04 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/29 15:36:00 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
		free(temp)
	}
}


int	main(void)
{
	//Create the first node
	t_list	*head = ft_lstnew("World");
	print_list(head);

	//Create a new node to add to the front
	t_list	*new_node = ft_lstnew("Hello");
	
	//Add new node to front of list
	ft_lstadd_front(&head, new_node);
	print_list(head);

	free_list(head);

	return (0);
} */