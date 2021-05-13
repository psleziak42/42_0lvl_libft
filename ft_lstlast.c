#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	struct s_list *previous;
	struct s_list *current;
	
	previous = lst;
	current = lst;
	
	if(lst == NULL)
		return lst;
	while(current != NULL)
	{
		previous=current;
		current=current->next;
	}
	return previous;
}
