/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:36:07 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/12 20:59:55 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char x)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != x)
		{
			count++;
			while (*s && *s != x)
				s++;
		}
		else
			++s;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int			res_count;
	char		**str;
	int			i;
	const char	*p_s;

	if (!s)
		return (NULL);
	res_count = count_words(s, c);
	str = (char **)malloc((res_count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < res_count)
	{
		while (*s == c)
			s++;
		p_s = s;
		while (*s && *s != c)
			s++;
		str[i] = ft_substr(p_s, 0, s - p_s);
		if (!str[i] && ft_split(*str, i))
			return (NULL);
	}
	str[i] = NULL;
	return (str);
}
/*
int main() {
    char str[] = "Hello, World! This is a test.";
    char **result = ft_split(str, ' ');
	printf("%c", **result);
	return 0;
}*/
