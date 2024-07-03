#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
    int	num;
	int	res;

    num = ft_isdigit('a');
    printf("%d\n", num);
	res = isdigit('a');
    printf("%d\n", res);
}