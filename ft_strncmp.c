/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:20:07 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/19 02:49:34 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int	main(void)
{
	int		num;
	int		res;
	char	s1[] = "a\200b";
	char	s2[] = "a\001c";
	int		n;

	n = 4;
	num = ft_strncmp(s1, s2, n);
	printf("%d\n", num);
	res = strncmp(s1, s2, n);
	printf("%d\n", res);
} */
