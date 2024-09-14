#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t      index;

    index = 0;
    if (size > 0)
    {
        while (index < size -1) 
        {
            dst[index] = src[index];
            index++;
        }
        dst[index] = '\0';
    }
    return (ft_strlen(src));
}