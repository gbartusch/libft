/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 00:58:30 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/31 18:18:54 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s_len;
	char	*str;
	size_t	i;

	i = 0;
	s_len = ft_strlen(s1);
	while (0 < s_len && ft_strchr(set, s1[s_len - 1]))
		s_len--;
	while (i < s_len && ft_strchr(set, s1[i]))
		i++;
	s_len = s_len - i + 1;
	str = malloc(s_len);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, (char *) s1 + i, s_len);
	return (str);
}

/* 
#include <stdio.h>
int	main(void)
{
	char	*s1 = "bcaHellOcab";
	char	*set = "abc";
	char	*str;

	str = ft_strtrim(s1, set);
	printf("%s\n", str);
} */
