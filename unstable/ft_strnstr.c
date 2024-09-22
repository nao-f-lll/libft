#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_i;
	size_t	haystack_i;
	size_t	needle_l;
	char	*p;
	int	has_subs;

	needle_l = ft_strlen(needle); 
	if (needle_l == 0)
		return ((char *)haystack);
	if (len > 256)
		len = len % 255;
	needle_i = 0;
	haystack_i = 0;
	has_subs = 0;
	while (haystack_i < len)
		while (needle_i < needle_l)
		{
			if (needle[needle_i++] == haystack[haystack_i++])
			{
				if (has_subs == 0)
				{
					has_subs = 1;
					p = (char *)haystack; 
				}
			}
			has_subs = 0;
		}
	if (has_subs)
		return (p);
	return (NULL);
}


/*
int	main(void)
{
	char str[] = "Morocoo";
	char sub_str[] = "roco";
	printf("original pointer %p\n function pointer %p\n", (str + 2), ft_strnstr(str, sub_str, 4));
	return (0);
}
*/

