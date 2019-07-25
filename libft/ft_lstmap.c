/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 17:38:33 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/15 22:03:45 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fraich;

	if (lst)
	{
		fraich = (*f)(lst);
		fraich->next = ft_lstmap(lst->next, f);
		return (fraich);
	}
	return (0);
}
