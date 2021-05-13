#include "libft.h"

char	*ft_strdup(const char *s)
{
	int i;
	char *up;

	i = 0;
	while(s[i] != '\0')
		i++;
	if(!(up = (char *)malloc((i + 1) * sizeof(char))))
		return(0);
	i = 0;
	while(s[i] != '\0')
	{
		up[i] = s[i];
		i++;
	}
	up[i] = '\0';
	return(up);
}
