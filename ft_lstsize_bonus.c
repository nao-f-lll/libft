#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		l_s;
	t_list	*current;

	l_s = 0;
	if (!lst)
		return (0);
	current = lst;
	while (current)
	{
		l_s++;
		current = current->next;
	}
	return (l_s);
}
