#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *a;
	a = s;
	
	while(n--)
		*a++ = c;
	return(s);
}
