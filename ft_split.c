#include "libft.h"

int ft_count(char const *s, char c)
{
	int i;
	int j;    

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[0] != c && i == 0)
		{
			j++;
			i++;
		}
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			j++;
			i++;
		}
		else
			i++;
	}
	return (j);
}

char **ft_split(char const *s, char c)
{
	int i;
	int k;
	int x;
	int y;
	int z;
	char *small;
	char **big;    

	i = 0;
	y = 0;
	x = ft_count(s, c);
	if (!(big = ft_calloc((x + 1), sizeof(char*))))
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		k = 0;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			k++;
		}
		if (k == 0)
			break;
		if (!(small = ft_calloc((k + 1), sizeof(char))))
			return (0);
		z = 0;
		while (z < k)
		{
			small[z] = s[i - k + z];
			z++;
		}
		big[y] = small;
		y++;
	}
	return (big);
}
