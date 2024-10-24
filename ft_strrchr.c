/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:55:52 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/05 18:54:21 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i > 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		--i;
	}
	if (!c || s[0] == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/*int main()
{
	char str[] = "asad";
	char ch = 'a';
	printf("%s\n",ft_strrchr(str, ch));

	return 0;
}*/
