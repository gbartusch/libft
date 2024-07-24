/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 22:27:24 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/19 03:02:48 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;
	unsigned char		ch;

	i = 0;
	str = s;
	ch = c;
	while (i < n)
	{
		if (*str == ch)
			return ((void *)(str));
		str++;
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*str;
	char	c;
	char	*s;
	char	*s1;
	size_t	n;

	str = "hdydicdjdc";
	n = 10;
	c = 'c';
	s = ft_memchr(str, c, n);
	printf("Character at the pointer: %p\n", s);
	s1 = memchr(str, c, n);
	printf("Character at the pointer: %p\n", s1);
} */
