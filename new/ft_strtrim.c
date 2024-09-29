#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s1_trm;
	int		s1_si;
	int		s1_ei;

	if (strlen(s1) == 0)
		return (strdup(""));
	s1_si = 0;
	s1_ei = ft_strlen(s1) - 1;
	while (s1[s1_si] && ft_strchr(set, s1[s1_si]))
		s1_si++;
	while (s1[s1_ei] && ft_strchr(set, s1[s1_ei]))
		s1_ei--;
	if (s1_si > s1_ei)
		return (strdup(""));
	s1_trm = (char *) malloc(s1_ei - s1_si + 2);
	if (!s1_trm)
		return (NULL);
	ft_strlcpy(s1_trm, (s1 + s1_si), (s1_ei - s1_si + 2));
	return (s1_trm);
}
