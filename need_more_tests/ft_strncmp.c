#include "libft.h"
#include <stdio.h>


static size_t	ft_limit_length(size_t s1_s, size_t s2_s, size_t n)
{
		if (s1_s < n)
			n = s1_s;
		if (s2_s < n)
			n = s2_s;
		return (n);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	s1_s;
	size_t	s2_s;
	size_t	index;
        
	index = 0;
	s1_s = ft_strlen(s1);
	s2_s = ft_strlen(s2);
	n = ft_limit_length(s1_s, s2_s, n);
	while (index < n)
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	return (0);

}



int	main(void)
{	    printf("Test 0: %d\n", ft_strncmp("hello", "hello", 10)); 
    printf("Test -1: %d\n", ft_strncmp("hello", "hellp", 5)); 
    printf("Test 0: %d\n", ft_strncmp("hello", "hellothere", 5)); 
    printf("Test 1: %d\n", ft_strncmp("hi", "hello", 4)); 
    printf("Test 0: %d\n", ft_strncmp("hello", "world", 0));
    printf("Test 0: %d\n", ft_strncmp("", "hello", 3));
    printf("Test 0: %d\n", ft_strncmp("hello\0world", "hello\0there", 7));
    printf("Test 1: %d\n", ft_strncmp("hello", "Hello", 5));
    printf("Test 0: %d\n", ft_strncmp("abc", "abcdef", 10));
    printf("Test 0: %d\n", ft_strncmp("abcdef", "abcdxyz", 4));

    return (0);
}
