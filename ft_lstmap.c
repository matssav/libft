/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msavaris <msavaris@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:50:16 by msavaris          #+#    #+#             */
/*   Updated: 2021/10/29 00:47:40 by msavaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*head;
	t_list		*tail;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	new = ft_lstnew(f(lst->content));
	if (!(new))
		return (NULL);
	ft_lstadd_back(&head, new);
	tail = head;
	lst = lst->next;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!(new))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&tail, new);
		tail = tail->next;
		lst = lst->next;
	}
	return (head);
}
