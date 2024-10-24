/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:49:08 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/01 12:12:36 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	nb;
	int	number;
	int	x;

	nb = 1;
	number = 0;
	x = 0;
	while (str[x] == ' ' || str[x] == '\f' || str[x] == '\n'
		|| str[x] == '\r' || str[x] == '\t' || str[x] == '\v')
		++x;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			nb *= -1;
		++x;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		number *= 10;
		number += str[x] - '0';
		++x;
	}
	return (nb * number);
}
