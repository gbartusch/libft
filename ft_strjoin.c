/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:42:08 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/10 22:30:42 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(s1_len + s2_len + 1);
	if (str == NULL)
		return (NULL);
	ft_strcpy(str, (char *) s1);
	ft_strcpy(str + s1_len, (char *) s2);
	str[s1_len + s2_len] = '\0';
	return (str);
}

/* 
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;
	char	*s1 = "Hello";
	char	*s2 = "World";
	
	str = ft_strjoin(s1, s2);
	printf("final: %s\n", str);
	free(str);
} */
