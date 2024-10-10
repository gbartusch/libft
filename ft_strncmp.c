/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:20:07 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/31 17:56:37 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] \
	&& i < n && s1[i] && s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* 
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int		num;
	int		res;
	char	s1[] = "";
	char	s2[] = "";
	int		n;

	n = 1;
	num = ft_strncmp(s1, s2, n);
	printf("%d\n", num);
	res = strncmp(s1, s2, n);
	printf("%d\n", res);
} */
