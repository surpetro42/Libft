/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:27:37 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/09 13:24:18 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

// void del(void *x)
// {
// 	free(x);
// }

// int main()
// {
// 	t_list *x = (t_list *)malloc(sizeof(t_list));
// 	int *y = (int *)malloc(sizeof(int));
// 	*y = 42;
// 	x->content = y;
// 	x->next = NULL;
// 	ft_lstclear(&x, &del);
// 	return 0;
// }
