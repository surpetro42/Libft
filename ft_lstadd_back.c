/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:53:55 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/09 11:50:49 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*count;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	count = *lst;
	while (count->next)
		count = count->next;
	count->next = new;
}
/*int main()
{
	t_list *x;
	t_list *y;
	
	x = ft_lstnew((char *)"hello");
	y = ft_lstnew((char *)"barev");
	ft_lstadd_back(&x, y);
	t_list *res = x;
	while (res)
	{
		printf("%s\n",res->content);
		res = res->next;
	}
//	printf("%s\n",(char *)x->content);
	return 0;
}*/
