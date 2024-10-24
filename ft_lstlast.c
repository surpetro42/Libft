/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:13:09 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/21 12:06:51 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int main()
{
	t_list *x;
	t_list *y;
	t_list *res;
	x = ft_lstnew((char *)"hello");
	y = ft_lstnew((char *)"World");
	res = ft_lstnew((char *)"Ape");
	res->next = NULL;
	y->next = NULL;
	x->next = y;
	res = ft_lstlast(x);
	printf("%s\n", res->content);
	return 0;
}*/
