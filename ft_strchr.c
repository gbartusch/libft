/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:27:13 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/17 15:17:12 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;

	chr = c;
	while (*s != '\0')
	{
		if (*s == chr)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[] = "Hello[zero this out] welcome to Codam.";
	int		c;
	char	*s;
	char	*s1;

	c = 345;
	s = ft_strchr(str, c);
	printf("%s\n", s);
	s1 = strchr(str, c);
	printf("%s\n", s1);
} */
