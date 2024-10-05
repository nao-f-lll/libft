/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:54:25 by nlyamani          #+#    #+#             */
/*   Updated: 2024/09/26 14:54:27 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (src == dest || n == 0)
		return (dest);
	if (dest > src)
	{
		index = n;
		while (index-- > 0)
			((char *)dest)[index] = ((char *)src)[index];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
