/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:38:51 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/08 18:07:06 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(size * count);
	if (str == NULL)
		return (NULL);
	while (i < (size * count))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

/* int main(void)
{
	char	*str;
	size_t	count;
	size_t	size;
	char	*str1;


	count = 5;
	size = 5;
	
	str = ft_calloc(count, size);
	printf("%p\n", str);
	str1 = calloc(count, size);
	printf("%p\n", str1);

	if (str && str1 && memcmp(str, str1, (size * count)) == 0)
    {
        printf("Both memory blocks are identical and initialized to zero.\n");
    }
    else
    {
        printf("Memory blocks are different or not initialized to zero.\n");
    }

	free(str);
	free(str1);
} */
