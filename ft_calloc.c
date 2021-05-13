#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int i;
	char *a;
	
	a = malloc(nmemb*size);
	if (a == 0)
		return(0);
//	ft_bzero(a, nmemb*size);
	i = 0;
	while (i < nmemb*size)
	{
		a[i] = '\0';
		i++;
	}
	return(a);
}
