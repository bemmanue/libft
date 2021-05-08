/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:36:52 by bemmanue          #+#    #+#             */
/*   Updated: 2021/05/05 12:36:56 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list *));
	if (new == NULL)
		return (NULL);
	if (content != NULL)
		new->content = content;
	else
		new->content = NULL;
	new->next = NULL;
	return (new);
}
