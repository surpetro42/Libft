/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:59:15 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/09 13:08:35 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst || new)
	{
		new->next = *lst;
		*lst = new;
	}
	return ;
}

/*int main()
{
	t_list *x;
	t_list *y;

	x = ft_lstnew((char *)"Hello");
	y = ft_lstnew((char *)"World");
	ft_lstadd_front(&x, y);
	x->next = x;
	printf("%s\n", x->content);
	return 0;
}*/
