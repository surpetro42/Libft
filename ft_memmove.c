/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:57:56 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/06 12:16:55 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = len;
	d = (char *)dst;
	s = (const char *)src;
	if (!d && !s)
		return (NULL);
	if ((size_t)d > (size_t)s)
	{
		i = len - 1;
		while (i < len)
		{
			d[i] = s[i];
			--i;
		}
		return (d);
	}
	i = -1;
	while (++i < len)
		d[i] = s[i];
	return (d);
}
/*int main()
{
	char *src = "thanks to @apellicc for this test !\r\n";
	//char *dst;

	//src = x + 5;
	//dst = src + 2;
	char dst1[0xF0];
	//strcpy(src, "xyz");
	char *test1 = ft_memmove(dst1, src, 39);
//	memmove(&dst1, src, strlen(src);
	printf("test1 = %s\n", test1);
//	printf("dst1 = %s", dst1);

	return 0;
}*/
