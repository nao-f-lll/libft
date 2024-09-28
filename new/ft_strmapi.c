#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	s_s;
	int		i;
	char	*str;

	if (!s || !f)
		return (NULL);
	s_s = ft_strlen(s);
	i = 0;
	str = (char *) malloc(s_s * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (*(s + i))
	{
		*(str + i) = f(i, *(s + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
