#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t     index;

    index = n - 1;
    {
        if (dest > src)
        {
            while (index--)
                ((char * )dest)[index] = ((char *)src)[index];
        }
        else
            ft_memcpy(dest, src, n);
    }
    return (dest);
}