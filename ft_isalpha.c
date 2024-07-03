#include <stdio.h>
#include <ctype.h>
#include "libft.h"


int	ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return(1);
    else
        return (0);
}

int	main(void)
{
    int	num;
    int	res;

    num = ft_isalpha('a');
    res = isalpha('a');
    printf("%d\n", num);
    printf("%d\n", res);
}
