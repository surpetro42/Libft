/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:02:58 by surpetro          #+#    #+#             */
/*   Updated: 2024/10/07 21:22:13 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	i;
	size_t	j;

	nlen = ft_strlen(needle);
	i = 0;
	j = 0;
	if (nlen == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < nlen && i + j < len && haystack[i + j] == needle[j])
				++j;
		}
		if (j == nlen)
			return ((char *)&haystack[i]);
		++i;
	}
	return (NULL);
}

// int main() {
//     const char* haystack = "Hello, world!";
//     const char* needle = "orld";
//     size_t len = strlen(haystack);

//     char* result = ft_strnstr(haystack, needle, len);
// 	printf("%s\n",result);
//     if (result != NULL) {
//         printf("toxy sksum e %ld elementic\n", result - haystack);
//     } else {
//         printf("toxy chi gtnvel \n");
//     }

//     return 0;
// }
