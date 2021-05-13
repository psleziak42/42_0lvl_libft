#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list *head;
	
	if(!(head = malloc(sizeof(struct s_list))))
		return(0);
	head->content = content;
	head->next = NULL;
	return head;
}
