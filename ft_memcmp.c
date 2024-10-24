/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:35:40 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/02 18:55:42 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		++i;
	}
	return (0);
}
/*int main()
{
	char *s1 = "\xff\xaa\xde\x12";
	char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
	size_t x = 4;
	
	printf("%d\n", memcmp(s1, s2, x));
	printf("%d\n", ft_memcmp(s1, s2, x));
	return 0;
}*/
