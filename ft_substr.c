#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int x;
	char		*a;
	unsigned int i;
	unsigned int str_len;

	if (s == NULL)
		return NULL;
	str_len = ft_strlen(s);
	i = 0;
	if (start >= str_len)
	{	
		if (!(a = malloc(1*sizeof(char))))
			return NULL;
		a[i] = '\0';
		return(a);
	}
	if (start + len < str_len)
		x = len;
	else
		x = str_len - start;
	if (!(a = ft_calloc((x + 1), sizeof(char))))
		return NULL;
	while(i<x)
	{
		a[i]=s[start + i];
		i++;
	}
//	a[i] = '\0'; - there is no '\0' because calloc itself
//			pads all memory with '\0'.
	return(a);
}
