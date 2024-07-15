/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:05:33 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/15 16:21:41 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	if (n > 0 && n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd (n % 10 + '0', fd);
	}
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write (fd, "-2147483648", 11);
		}
		else
		{
			ft_putchar_fd('-', fd);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
	}
}

/* int	main(void)
{
	int	n;
	int	fd;

	n = -32488;
	fd = 1;
	ft_putnbr_fd(n, fd);
} */
