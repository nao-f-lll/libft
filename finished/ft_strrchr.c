#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	if (c > 255)
		c = c % 256;
	while (index >= 0)
	{
		if (s[index] == c)
			return ((char *)(s + index));
		index--;
	}
	return (NULL);
}
