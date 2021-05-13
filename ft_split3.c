#include "libft.h"
#include<stdlib.h>

static void	ft_print(char **s)
{
	int i;
	int y;
	
	i = 0;
	y = 0;
	while(s[i][y] != '\0')
	{
		while(s[i][y] != '\0')
		{
			write(1, &s[i][y], 1);
			y++;
		}
		i++;
	}
}

static int	ft_counter(char const *s, char c)
{
	int i;
	int j;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
			i++;
		}
		else
			i++;
	}
//	printf("i, %d", i);
//	printf("j, %d", j);
	return(i-j);
}
	

char	**ft_split(char const *s, char c)
{
	int i;
	int j;
	int k;
	int x;
//	char *x;
	char **big;

	i = 0;
	j = 0;
	k = 0;
	x = ft_counter(s, c);
	if(!(big = malloc((x + 1) * sizeof(char))))
		return(0);
	while(s[i] != '\0')
	{
		while(s[i] != c)
		{
			big[k][j] = s[i];
			j++;
			i++;
			if (s[i] == c)
			{
				big[k][j] = '\0';
				k++;
				j = 0;
			}
		}
		i++;
	}
	big[k][j] = '\0';
	ft_print(big);
	return(big);
}

int main()
{
	int i;
	char a[] = "jestemzbogiemzalfa";
	
	ft_split(a, 'z');
//	
//	while(
//	printf("%s", ft_split(a, 'z'));
}
