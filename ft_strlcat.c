/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:58:00 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 14:48:19 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0')
	{
		dst_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] != '\0' && i < dstsize - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	size_t	dstsize;
// 	size_t	num;
// 	size_t	res;
// 	char	dst[20] = "Hello";
// 	char	src[] = "World";
// 	char	dst1[20] = "Hello";
// 	char	src1[] = "World";

// 	dstsize = 5;
// 	num = ft_strlcat(dst, src, dstsize);
// 	printf("The concatenated string is: %s and the length of it is: %zu",\
//	 dst, num);
// 	printf("\n");
// 	res = strlcat(dst1, src1, dstsize);
// 	printf("The concatenated string is: %s and the length of it is: %zu",\
//	 dst1, res);
// 	printf("\n");
// }
