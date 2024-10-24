/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:04:59 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/08 22:11:00 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/*int main()
{
	t_list *x;
	t_list *y;
	int res;
	x = ft_lstnew((char *)"Hello");
	y = ft_lstnew((char *)"World");
	y->next = NULL;
	x->next = y;
	res = ft_lstsize(x);
	printf("%d\n", res);
	return 0;
}*/
