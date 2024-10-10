/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:32:44 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/08/05 11:35:40 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* 
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	*new;
	t_list 	*first_node;
	int data1 = 42;
	int data2 = 1024;
	int	*ptr1 = &data1;
	int	*ptr2 = &data2;
	// char *str = "test";

	new = ft_lstnew(ptr1);
	first_node = new;
	while(new != NULL)
	{
		printf("%d\n", *(int *)new->content);
		new = new->next;
	}
	printf("\n");
	data1 = 12;
	new = first_node;
	new->next = ft_lstnew(ptr2);
	new->next->next = ft_lstnew(ptr1);
	new->next->next->next = ft_lstnew(ptr1);
	new->next->next->next->next = ft_lstnew(ptr2);
	while(new != NULL)
	{
		printf("%d\n", *(int *)new->content);
		new = new->next;
	}
	int i = 0;
	new = first_node;
	while (new != NULL)
	{
		new = first_node->next;
		printf("loop%d\n", ++i);
		free(first_node);
		first_node = new;
	}
	return (0);
} */
