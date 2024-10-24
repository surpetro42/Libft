/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:43:57 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/04 19:47:08 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*m;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	m = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (m == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		m[i] = f(i, s[i]);
		++i;
	}
	m[i] = '\0';
	return (m);
}
/*char *f(unsigned int x, char y)
{
	char *str = "Hello Gaspar";
	printf("%d \n%c", x, y);
	return str;
}
int main()
{
	char const *str = "barev Gaspar";
	unsigned int s;
	char y;

	ft_strmapi(str, *f(s, y));
//	ft_strmapi(str, (char)*f(s, y));
	return 0;
}*/
