#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;
	int i;
	int j;
	
	i = 0;
	j = 0;
	if (!(new = malloc((ft_strlen(s1)+ft_strlen(s2))*sizeof(char) + 1)))
		return(0);
	while(s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while(s2[j] != '\0')
	{
		new[i + j] = s2[j];
		j++;
	}
	new[i+j] = '\0';
	return(new);
}
