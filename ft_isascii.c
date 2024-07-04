/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 00:37:29 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/04 17:05:46 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int ft_isascii(int  c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

int main(void)
{
	int	num;
	int	res;

	num = ft_isascii(0x2a);
	printf("%d\n", num);
	res = isascii(0x2a);
	printf("%d\n", res);
}
