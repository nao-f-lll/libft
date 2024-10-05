/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:47:36 by nlyamani          #+#    #+#             */
/*   Updated: 2024/10/05 13:29:10 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			al_s;

	al_s = nmemb * size;
	tmp = (unsigned char *) malloc(al_s);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, al_s);
	return (tmp);
}
