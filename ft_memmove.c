#include "libft.h"
//geeksForGeeksExample

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char a[n];
	char *d;
	char *s;
	unsigned int i;
	
	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = a[i];
		i++;
	}
	return(dest);
}
