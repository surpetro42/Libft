/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:46:42 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/06 12:17:41 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((void *)s + i);
		}
		++i;
	}
	return (NULL);
}
/*int main()
{
	char buffer[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int n = 8;
	size_t len = sizeof(buffer);
	void *x = ft_memchr(buffer, n, len);
	if(x == NULL)
		printf("sinvoly chi gtnrlv!!!!!!!!!!!!!");
	else
		printf("sinvoly gtnvela ______");
	return 0;
}*/
