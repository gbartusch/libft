/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 00:27:22 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/13 18:00:19 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') \
	|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	num;
// 	int	res;

// 	num = ft_isalnum('4');
// 	printf("%d\n", num);
// 	res = isalnum('4');
// 	printf("%d\n", res);
// }
