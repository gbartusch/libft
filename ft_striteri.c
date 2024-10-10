/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 23:28:51 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/15 15:15:48 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* 
#include <stdlib.h>
#include <stdio.h>
void	myfunc(unsigned int i, char *c)
{
	printf("index = %d and character %c\n", i, *c);
}

int	main(void)
{
	char	s[] = "Hello";

	ft_striteri(s, &myfunc);
} */
