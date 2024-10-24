/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:35:43 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/05 17:29:33 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		++i;
	return (i);
}
/*int main()
{
	char d[20];
	const char s[] = "Hello World";
	size_t x = 10;
	int res = ft_strlcpy(d, s, x);
	printf("d = %s\n", d);
	printf("res = %d\n", res);
	return 0;
}*/
