#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *new;
	
	if(!(new = (char*)malloc(ft_strlen(s)*sizeof(char)+1)))
		return(0);
	i = -1;	
	while(s[++i] != '\0')
		new[i] = f(i, s[i]);
	new[i] = '\0';
	return(new);
}
