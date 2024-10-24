/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:37:55 by surpetro          #+#    #+#             */
/*   Updated: 2024/10/07 21:20:19 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s1 == *s2 && n > 0)
	{
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// int main()
// {
// 	const char s1[] = "ABCDE";
// 	const char s2[] = "ABcDE";
// 	size_t x = 3;
// 	int z = ft_strncmp(s1, s2, x);
// 	printf("%d\n", z);
// 	return 0;
// }
