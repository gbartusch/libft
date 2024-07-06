/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:02:31 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 14:43:14 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	str[20] = {0};
// 	char	str1[20] = {0};
// 	size_t	n;

// 	n = 6;
// 	ft_bzero(str, n);
// 	printf("%s\n", str);
// 	bzero(str1, n);
// 	printf("%s\n", str1);
// }
