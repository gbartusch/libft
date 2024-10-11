/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:33:18 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 14:43:41 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst1;
	const char	*src1;

	dst1 = dst;
	src1 = src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	dest[20] = {0};
// 	char	src[20] = "HelloWorld";
// 	char	dest1[20] = {0};
// 	char	src1[20] = "HelloWorld";
// 	size_t	n;

// 	n = 5;
// 	ft_memcpy(dest, src, n);
// 	printf("%s\n", dest);
// 	memcpy(dest1, src1, n);
// 	printf("%s\n", dest1);
// }
