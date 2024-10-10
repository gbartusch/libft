/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 00:37:29 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 14:43:27 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

//#include <stdio.h>
//#include <ctype.h>

// int	main(void)
// {
// 	int	num;
// 	int	res;

// 	num = ft_isascii(0x2a);
// 	printf("%d\n", num);
// 	res = isascii(0x2a);
// 	printf("%d\n", res);
// }
