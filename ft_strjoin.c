/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:01:42 by surpetro          #+#    #+#             */
/*   Updated: 2024/01/30 17:56:51 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (str1 == NULL)
		return (NULL);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, str1, len1);
	ft_memcpy(result + len1, str2, len2 + 1);
	return (result);
}
/*int main()
{
	const char x[] = "Hello, ";
	const char y[] = "World!";
	ft_strjoin(x, y);
	return 0;
}*/
