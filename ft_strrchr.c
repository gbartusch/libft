/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 18:22:11 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 19:19:30 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = s;
	while (*s != '\0')
	{
		s++;
	}
	while (s >= ptr)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "hdydicgdjdg";
// 	char	c;
// 	char	*s;
// 	char	*s1;

// 	c = 'c';
// 	s = ft_strrchr(str, c);
// 	printf("Character at the pointer: %p\n", s);
// 	s1 = strrchr(str, c);
// 	printf("Character at the pointer: %p\n", s1);
// 	printf("%ld", s - str);
// }
