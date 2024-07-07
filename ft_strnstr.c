/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 21:57:42 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/07 23:29:05 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)(haystack));
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle [j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *) &haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*haystack = "HelloCodam";
// 	char	*needle = "loCo";
// 	char	*haystack1 = "HelloCodam";
// 	char	*needle1 = "loCo";
// 	int		len;
// 	char	*str1;
// 	char	*str2;

// 	len = 15;
// 	str1 = ft_strnstr(haystack, needle, len);
// 	printf("%s\n", str1);
// 	str2 = strnstr(haystack1, needle1, len);
// 	printf("%s\n", str2);
// }
