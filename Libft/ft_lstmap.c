/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nilamber <nilamber@student.42nice.f>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:10:08 by nilamber          #+#    #+#             */
/*   Updated: 2024/05/10 13:28:30 by nilamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*copy;

	if (!lst || !f || !del)
		return (NULL);
	copy = ft_lstnew(f(lst->content));
	head = copy;
	while (lst)
	{
		if (!copy)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (lst->next)
			copy->next = ft_lstnew(f(lst->next->content));
		lst = lst->next;
		copy = copy->next;
	}
	return (head);
}
