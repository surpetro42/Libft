/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:30:26 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/05 18:31:25 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (!dst && dstsize == 0)
		return (0);
	len_dst = (size_t)ft_strlen(dst);
	len_src = (size_t)ft_strlen(src);
	if (dstsize <= len_dst)
		return (dstsize + ft_strlen(src));
	i = 0;
	while (src[i] != '\0' && (len_dst + i) < (dstsize - 1))
	{
		dst[len_dst + i] = src[i];
		++i;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*int main()
{
	char dst[20] = "Hello, ";
	const char src[] = "World";
	size_t res = ft_strlcat(dst, src, sizeof(dst));
	printf("dst = %s\n", dst);
	printf("%zu\n", res);
	return 0;
}*/
