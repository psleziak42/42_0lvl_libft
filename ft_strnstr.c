#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	
	i = 0;
	j = 0;
	if (s2[i] == '\0')
		return((char *)&s1[i]);
	while(s1[i] != '\0' && i < len)
	{
		if (s1[i] == s2[j])
		{
			k = i;
			while(s1[k] == s2[j] && k < len)
			{
				k++;
				j++;
				if (s2[j] == '\0')
					return((char *)&s1[i]);
			}
			i++;
			j = 0;
		}
		else	
			i++;
	}
	return NULL;
}
