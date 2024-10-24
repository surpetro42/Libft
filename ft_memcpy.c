/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:39:36 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/05 15:43:05 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*destination;
	const char	*source;	

	i = 0;
	destination = (char *)dst;
	source = (const char *)src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
/*int main()
{
	char y[] = "Hello, World";
	int len = ft_strlen(y);
	char x[20];
	ft_memcpy(x, y, sizeof(x));
	printf("x = %s\n", x);
	return 0;
}*/
