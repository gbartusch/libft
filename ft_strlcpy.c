/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 18:09:30 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 14:49:11 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	src[] = "HelloWorld";
// 	char	dst[20] = "";
// 	char	src1[] = "HelloWorld";
// 	char	dst1[20] = "";
// 	size_t	dstsize;
// 	size_t	num;
// 	size_t	res;

// 	dstsize = 20;
// 	num = ft_strlcpy(dst, src, dstsize);
// 	printf("Copied string is: %s and length of src\
//	string is: %zu\n", dst, num);
// 	res = strlcpy(dst1, src1, dstsize);
// 	printf("Copied string is: %s and length of src\
//	string is: %zu\n", dst1, res);
// }
