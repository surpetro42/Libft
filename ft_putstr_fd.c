/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 20:56:35 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/12 16:24:38 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		write(fd, s, 1);
		++s;
	}
}

/*int main()
{
	int fd = open("Gaspar", O_CREAT | O_RDWR); 
	// open faily bacelu hamar
	// O_CREAT Ստեղծեք ֆայլ, եթե այն գոյություն չունի:
	// O_RDWR Բաց է կարդալու և գրելու համար:
	char *str = "Hello";
	ft_putstr_fd(str, fd);
	return 0;
}*/
