#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{	
		if (s1[i] == s2[i] && i < n)
			i++;
		else
			break;
	}
	if (i >= n)
		return(0);
	return(s1[i] - s2[i]);
}
