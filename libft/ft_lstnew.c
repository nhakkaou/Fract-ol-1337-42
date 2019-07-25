/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trying.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 18:06:50 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/13 18:34:05 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *fresh;

	fresh = NULL;
	if ((fresh = malloc(sizeof(t_list))) == NULL)
		return (0);
	if (content == NULL)
	{
		fresh->content = 0;
		fresh->content_size = 0;
		fresh->next = NULL;
		return (fresh);
	}
	fresh->content = malloc(content_size);
	fresh->content = ft_strcpy(fresh->content, content);
	fresh->content_size = content_size;
	fresh->next = NULL;
	return (fresh);
}
