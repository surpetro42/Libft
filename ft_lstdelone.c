/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:20:56 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/09 13:09:05 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

void del(void *x)
{
	free(x);
}
int main()
{
	t_list *x = (t_list *)malloc(sizeof(t_list));
	int *data = (int *)malloc(sizeof(int));
	*data = 42;
	x->content = data;
	x->next = NULL;
	ft_lstdelone(x, &del);
	return 0;
}
