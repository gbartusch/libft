/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:32:06 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/13 14:19:02 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static void	*freesubs(char **array, int j);
static int	countwords(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		start;

	j = 0;
	i = 0;
	array = (char **)malloc((countwords(s, c) + 1) * sizeof(char *));
	if (array == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			array[j] = ft_substr(s, start, i - start);
		if (!array[j])
			return (freesubs(array, j));
		j++;
	}
	array[j] = NULL;
	return (array);
}

static void	*freesubs(char **array, int j)
{
	while (j-- > 0)
		free(array[j]);
	free(array);
	return (NULL);
}

static int	countwords(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

/* int	main(void)
{
	char	*s = "WelcometoCodam";
	char	c;
	int		i;
	char	**array;

	i = 0;
	c = 'e';
	array = ft_split(s, c);
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	while (array[i])
	{
		printf("%s\n", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
} */
