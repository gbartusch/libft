/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:27:13 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 18:21:09 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "hdydicdjdc";
// 	char	c;
// 	char	*s;
// 	char	*s1;

// 	c = 'c';
// 	s = ft_strchr(str, c);
// 	printf("Character at the pointer: %p\n", s);
// 	s1 = strchr(str, c);
// 	printf("Character at the pointer: %p\n", s1);
// }
