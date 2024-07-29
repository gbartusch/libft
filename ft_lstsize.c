/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:19:50 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/29 15:36:38 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* 
#include <stdio.h>

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
	int		num;
	t_list	*head = ft_lstnew("World");
	
	new = head;
	new->next = ft_lstnew("Hello");
	new->next->next = ft_lstnew("How");
	new->next->next->next = ft_lstnew("are");
	new->next->next->next->next = ft_lstnew("you?");
	print_list(head);
	num = ft_lstsize(new);
	printf("%d\n", num);

	free_list(new);
} */