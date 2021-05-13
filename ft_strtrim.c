#include "libft.h"

int	ft_check_1(char const *s1, char const *set)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while(set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return(i);
}

int	ft_check_2(char const *s1, char const *set, int i)
{
	int j;
	int k;
	
	j = 0;
	k = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i--;
			j=0;
			k++;
		}
		else
			j++;
	}
	return(k);
}

char *ft_strtrim(char const *s1, char const *set)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int l;
	char *trim;
	
	if (s1 == NULL)
		return NULL;
	i = 0;
	l = 0;
	j = ft_check_1(s1, set);
	while (s1[j+i] != '\0')	
		i++;	
	if (j != ft_strlen(s1))
		k = ft_check_2(s1, set, j+i-1);
	else
		k = 0;
	if(!(trim = ft_calloc((i-k + 1), sizeof(char))))
		return(0);
	while(i-k>0)
	{
		trim[l] = s1[j+l];
		l++;
		i--;
	}
	return(trim);
}		
