#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t      dest_index;
    size_t      src_index;
    size_t      dest_size;
    size_t      src_size;

    dest_size = ft_strlen(dest);
    src_size = ft_strlen(src);
    src_index = 0;
    dest_index = dest_size;
    
    if (size <= dest_size)
        return size + src_size;
    while (dest_index + src_index < (size - 1) && src[src_index])
            dest[dest_index++] = src[src_index++];
    dest[dest_index] = '\0';
    return (dest_size  + src_size);
}