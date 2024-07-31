/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:44:26 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/31 12:32:52 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}
/* void	del(void	*content)
{
	free(content);
}
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

int	main(void)
{
	char	*str1 = strdup("Hello");
	char	*str2 = strdup("World");
	t_list	*first_node = ft_lstnew(str1);
	t_list	*second_node = ft_lstnew(str2);
	
	first_node->next = second_node;

	print_list(first_node);
	ft_lstdelone(second_node, del);
	first_node->next = NULL;
	print_list(first_node);
	ft_lstdelone(first_node, del);

	return (0);
} */
