/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:53:25 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/07 23:29:56 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (str1[i] - str2[i]);
}

// int	main(void)
// {
// 	int		num;
// 	int		res;
// 	char	*s1;
// 	char	*s2;
// 	int		n;

// 	s1 = "Helmo";
// 	s2 = "Hello";
// 	n = 5;
// 	num = ft_memcmp(s1, s2, n);
// 	printf("%d\n", num);
// 	res = memcmp(s1, s2, n);
// 	printf("%d\n", res);
// }
