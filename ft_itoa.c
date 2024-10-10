/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:27:20 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/31 20:39:16 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	int	temp;
	int	i;
	int	size;

	i = 0;
	temp = 0;
	size = ft_strlen(str);
	while (i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = temp;
		i++;
	}
	return (str);
}

static int	countchars(int n)
{
	int		count;

	count = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*digitintostr(char *str, int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	const int	number_of_chars = countchars(n);

	str = malloc(sizeof(char) * (number_of_chars + 1));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(str, "-2147483648", 12));
	if (n == 0)
		return (ft_memcpy(str, "0", 2));
	digitintostr(str, n);
	if (n < 0)
		str[number_of_chars - 1] = '-';
	str[number_of_chars] = '\0';
	str = ft_strrev(str);
	return (str);
}

//#include <stdlib.h>
//#include <stdio.h>
//#include <stdbool.h>

// int	main(void)
// {
// 	char	*str;
// 	int		n;

// 	n = -2147483648;
// 	str = ft_itoa(n);
// 	printf("%s\n", str);
// 	free(str);
// }
