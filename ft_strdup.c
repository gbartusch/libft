/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:07:44 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/08 19:19:40 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (s1[length] != '\0')
	{
		length++;
	}
	str = malloc(length + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* 
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*s1 = "HelloWorld";
	char	*str;
	char	*str1;
	
	str = ft_strdup(s1);
	printf("%s\n", str);
	str1 = strdup(s1);
	printf("%s\n", str1);

	free(str);
	free(str1);
} */