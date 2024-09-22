#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	if (c > 255)
		c = c % 256;
	while (s[index])
	{
		if (s[index] == c)
			return ((char *)(s + index));
		index++;
	}
	if (c == '\0')
		return ((char *)(s + index));
	return (NULL);
}
