#include<stdio.h>
#include "libft.h"

int	ft_delimiter(char const *s, char c)
{
	int i;
	int d;	

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			d++;
		else
			i++;
	}
	return(d);
}

char	*ft_mini(char const *s, char c, char const **split)
{
	int i;
	char *mini;
	
	i = 0;
	if (s[i] == c)
	{
		i++;
		if (s[i] != c)
			ft_mini(s[i], c, **split);
	}
	while(s[i] != c)
		i++;
	if(!(mini = (char*)malloc(i*sizeof(char))))
		return(0);
	while(i--)
	{
		if (i = 0)
			*s='\0';
			break;
		*s++=*mini++;
	}
	return(mini)
}

char **ft_split(char const *s, char c)
{
	int l;
	int d;
	char *mini;
	char **split;

	l = ft_strlen(s);
	d = ft_delimiter(s, c)
	
	if (!(split = (char*)malloc((l-d)*sizeof(char))))
		return(0);

	ft_mini(s, c, **split);
	while
	

	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			d++;
		}
		else
			i++;
	}
	if(!(split = (char*)malloc((i-d)*sizeof(char))))
		return 0;
	while(s[i] != '\0')
	{
		i
	
}

int main()
{
	char a[] = "zJazJestemzBogiemzTyzNie";
	
	printf("%s", ft_split(a, z));
}
