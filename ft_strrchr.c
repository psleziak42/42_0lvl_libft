#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	while (s[i] != (char)c && i >= 0)
		i--;
	if (i < 0)
		return('\0');
	return((char*)&s[i]);
}
