#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (src == dest || n == 0)
		return (dest);
	index = n - 1;
	{
		if (dest > src)
		{
			while (index-- > 0)
				((char *)dest)[index] = ((char *)src)[index];
		}
		else
			ft_memcpy(dest, src, n);
	}
	return (dest);
}
