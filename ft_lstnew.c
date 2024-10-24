/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: surpetro <surpetro@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:54:22 by surpetro          #+#    #+#             */
/*   Updated: 2024/02/08 21:42:54 by surpetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = (NULL);
	return (new);
}
int main()
{
	t_list *x;
	t_list *res;
	x = (t_list *)malloc(sizeof(t_list));
	x->content = "Hello!";
	res = (t_list *)malloc(sizeof(t_list));
	res = ft_lstnew(x->content);
	printf("%s \n", res->content);
	return 0;
}