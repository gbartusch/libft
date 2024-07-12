/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginabartusch <ginabartusch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:32:06 by ginabartusc       #+#    #+#             */
/*   Updated: 2024/07/13 00:54:59 by ginabartusc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;
	int	in_substring;

	i = 0;
	count = 0;
	in_substring = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			in_substring = 0;
		}
		else if (!in_substring)
		{
			in_substring = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;
	int		i;
	int		j;
	int		start;

	j = 0;
	i = 0;
	words = ft_countwords(s, c);
	array = (char **)malloc((words + 1) * sizeof(char *));
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
		{
			array[j] = ft_substr(s, start, i - start);
			if (!array[j])
			{
				while (j-- > 0)
					free(array[j]);
				free(array);
				return (NULL);
			}
			j++;
		}
	}
	array [j] = NULL;
	return (array);
}

int	main(void)
{
	char	*s = "HelloMyNameIsGina";
	char	c;
	int		i;
	char	**array;

	i = 0;
	c = 'e';
	array = ft_split(s, c);
	while (array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
	free(array);
}
