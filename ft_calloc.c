/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:13:59 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/04 19:46:37 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size != 0 && count * size >= SIZE_MAX / size)
		return (NULL);
	res = (void *)malloc(count * size);
	if (res == 0)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
/*int main()
{
	int x = 10;
	int y = sizeof(x);
	ft_calloc(x, y);
	return 0;
}*/
