/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:43:22 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/09 14:04:27 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	x;
	size_t	y;
	char	*m;

	x = 0;
	y = 0;
	if (s1 == NULL)
		return (NULL);
	while (s1[x] && ft_strchr(set, s1[x]) != NULL)
		++x;
	y = ft_strlen(s1);
	while (y > x && ft_strchr(set, s1[y - 1]) != NULL)
		--y;
	m = ft_substr(s1, x, y - x);
	return (m);
}

/*int main()
{
    const char str[] = "  a  Hello, World!  W!    ";
    const char set[] = " a H W";

    char *trimmed_str = ft_strtrim(str, set);

    printf("Original: \"%s\"\n", str);
    printf("Trimmed: \"%s\"\n", trimmed_str);


    free(trimmed_str);

	return 0;
}*/
