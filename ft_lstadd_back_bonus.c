#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst && new)
	{
		current = ft_lstlast(*lst);
		if (current)
			current->next = new;
		else
			*lst = new;
	}
}
