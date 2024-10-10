/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:31:43 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/13 20:47:19 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	size_t	num;
	size_t	res;

	num = ft_strlen("helloworld");
	printf("%zu\n", num);
	res = strlen("helloworld");
	printf("%zu\n", res);
} */
