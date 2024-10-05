/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:51:16 by nlyamani          #+#    #+#             */
/*   Updated: 2024/10/01 17:51:18 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_i;
	size_t	n_i;
	size_t	n_s;

	h_i = 0;
	n_s = ft_strlen(needle);
	if (!(*needle))
		return ((char *) haystack);
	if (n_s > len || n_s > ft_strlen(haystack))
		return (NULL);
	while (h_i < len && haystack[h_i])
	{
		n_i = 0;
		while (haystack[h_i + n_i] == needle[n_i] && (h_i + n_i) < len)
		{
			n_i++;
			if (!needle[n_i])
				return ((char *) haystack + h_i);
		}
		h_i++;
	}
	return (NULL);
}
