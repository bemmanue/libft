/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:25:03 by bemmanue          #+#    #+#             */
/*   Updated: 2021/05/07 17:25:06 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;
	t_list	*temp_new;

	temp = lst;
	new = ft_lstnew(f(temp->content));
	temp_new = new;
	while (temp)
	{
		if (temp->next != NULL)
		{
			temp_new->next = ft_lstnew(f(temp->next->content));
			if (temp_new->next == NULL)
			{
				ft_lstclear(&new, del);
				return (NULL);
			}
		}
		else
			temp_new->next = NULL;
		temp = temp->next;
		temp_new = temp_new->next;
	}
	return (new);
}
