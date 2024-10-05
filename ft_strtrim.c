/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:51:26 by nlyamani          #+#    #+#             */
/*   Updated: 2024/10/05 14:12:56 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s1_trm;
	int		s1_si;
	int		s1_ei;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	s1_si = 0;
	s1_ei = ft_strlen(s1) - 1;
	while (s1[s1_si] && ft_strchr(set, s1[s1_si]))
		s1_si++;
	while (s1[s1_ei] && ft_strchr(set, s1[s1_ei]))
		s1_ei--;
	if (s1_si > s1_ei)
		return (ft_strdup(""));
	s1_trm = (char *) malloc(s1_ei - s1_si + 2);
	if (!s1_trm)
		return (NULL);
	ft_strlcpy(s1_trm, (s1 + s1_si), (s1_ei - s1_si + 2));
	return (s1_trm);
}
