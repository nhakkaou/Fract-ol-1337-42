/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhakkaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:51:17 by nhakkaou          #+#    #+#             */
/*   Updated: 2018/10/06 17:27:46 by nhakkaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*m;

	m = (char *)haystack;
	if (needle[0] == '\0')
		return (m);
	i = 0;
	while (m[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (m[i + j] != needle[j])
				break ;
			j++;
		}
		if (needle[j] == '\0')
			return (m + i);
		i++;
	}
	return (0);
}
