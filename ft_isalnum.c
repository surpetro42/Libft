/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:33:41 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/05 14:13:12 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
}
/*int main()
{
	int x = ft_isalnum('a');
	printf("x = %d", x);
	return 0;
}*/
