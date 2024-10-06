#include "libft.h"
//#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}
/*
void add_one(void *content)
{
	*(int *)content += 1;
}

void	print_content(void *content)
{
	printf("%d\n", *(int *)content);
}

int	main(void)
{
	t_list	*lst;
	int	content[3] = {101, 202, 404};
	
	lst = ft_lstnew(content);
	ft_lstadd_front(&lst, ft_lstnew(content + 1));
	ft_lstadd_front(&lst, ft_lstnew(content + 2));
	ft_lstiter(lst, print_content);
	ft_lstiter(lst, add_one);
	ft_lstiter(lst, print_content);
	free(lst->next->next);
	free(lst->next);
	free(lst);
	return (0);
}
*/
