#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	struct s_list *current;
	
	if (*lst == NULL)
	{	
		new->next = *lst;
		*lst=new;
	}
	else
	{
		current = *lst;
		while(current->next != NULL)
			current=current->next;
		current->next = new;
	//	new->next = NULL;
	}
}
