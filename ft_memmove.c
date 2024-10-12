/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:57:18 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/10/12 19:41:48 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*src1;
	char		*dst1;

	src1 = src;
	dst1 = dst;
	i = -1;
	if (src1 == dst1)
		return (dst);
	if (dst1 < src1)
	{
		while (++i < len)
			dst1[i] = src1[i];
	}
	else
	{
		while (len > 0)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dst[] = "HelloWorld";
// 	char	src[] = "HelloWorld";
// 	char	dst1[] = "HelloWorld";
// 	char	src1[] = "HelloWorld";
// 	size_t	len;

// 	len = 5;
// 	ft_memmove(dst, src, len);
// 	printf("%s\n", dst);
// 	memmove(dst1, src1, len);
// 	printf("%s\n", dst1);
// }
