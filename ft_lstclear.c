#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	struct s_list *temp;
	struct s_list *previous;
	
	temp = *lst;
	previous = *lst;
	while(temp != NULL)
	{
		previous = temp->next;
		del(temp->content);
		free(temp);
		temp = previous;
	}
	*lst=NULL;
}
