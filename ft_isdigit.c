/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 00:28:10 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/06 14:43:32 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

// 	num = ft_isdigit('a');
// 	printf("%d\n", num);
// 	res = isdigit('a');
// 	printf("%d\n", res);
// }
