/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:27:20 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/15 18:53:05 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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
	if (n < 0)
	{
		count++;
		n = n * (-1);
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
		n = n * (-1);
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int			sign;
	char		*str;
	const int	number_of_chars = countchars(n);

	sign = 1;
	if (n < 0)
		sign *= -1;
	str = malloc(sizeof(char) * (number_of_chars + 1));
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(str, "-2147483648", 12));
	if (n == 0)
		return (ft_memcpy(str, "0", 2));
	digitintostr(str, n);
	if (sign == -1)
		str[number_of_chars - 1] = '-';
	str[number_of_chars] = '\0';
	str = ft_strrev(str);
	return (str);
}

/* int	main(void)
{
	char	*str;
	int		n;

	n = 0;
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
} */
