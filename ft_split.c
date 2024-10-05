/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:49:27 by nlyamani          #+#    #+#             */
/*   Updated: 2024/10/05 15:27:37 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	w_c;
	int	i;

	w_c = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			w_c++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (w_c);
}

static void	ft_free(char **words, int words_i)
{
	while (words_i-- > 0)
		free(words[words_i]);
	free(words);
}

static int	find_word_end(const char *s, char c)
{
	int		w_ed;

	w_ed = 0;
	while (s[w_ed])
	{
		if (s[w_ed] == c)
			return (w_ed);
		w_ed++;
	}
	return (w_ed);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	int		ws_c;
	int		w_ed;
	int		s_i;
	int		words_i;

	s_i = 0;
	words_i = 0;
	if (!s)
		return (NULL);
	ws_c = ft_word_count(s, c);
	if (ws_c < 0)
		return (NULL);
	words = malloc((ws_c + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (s[s_i])
	{
		while (s[s_i] == c)
			s_i++;
		if (s[s_i])
		{
			w_ed = find_word_end(s + s_i, c);
			words[words_i] = ft_substr(s + s_i, 0, w_ed);
			if (!words[words_i])
				return (ft_free(words, words_i), NULL);
			words_i++;
			s_i += w_ed;
		}
	}
	words[words_i] = NULL;
	return (words);
}
