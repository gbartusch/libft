/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 17:47:47 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 14:43:56 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	b[20] = {0};
// 	int		c;
// 	size_t	len;
// 	char	b1[20] = {0};
// 	int		c1;
// 	size_t	len1;
// 	size_t	i;

// 	c = 'a';
// 	len = 10;
// 	c1 = 'a';
// 	len1 = 10;
// 	i = 0;
// 	ft_memset(b, c, len);
// 	while (i < len)
// 	{
// 		printf("%c", b[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	memset(b1, c1, len1);
// 	while (i < len1)
// 	{
// 		printf("%c", b1[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
