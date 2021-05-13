#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int i;
	struct s_list *ptr;
	
	ptr = lst;
	i = 0;
	while(ptr != NULL)
	{
		i++;
		ptr=ptr->next;
	}
	return(i);
}	
