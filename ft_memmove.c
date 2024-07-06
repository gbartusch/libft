/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:57:18 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 14:43:49 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*src1;
	char		*dst1;

	src1 = src;
	dst1 = dst;
	i = len;
	if (src1 < dst1 && dst1 < src1 + len)
	{
		while (i > 0)
		{
			dst1[i - 1] = src1[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}

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
