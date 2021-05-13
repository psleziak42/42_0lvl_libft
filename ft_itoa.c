#include "libft.h"

char	*ft_itoa(int n)
{
	int i;
	int z;
	char x;
	char *itoa_buffer;

	if (n == -2147483648)
		return(ft_strdup("-2147483648"));
	if (n == 0)
		return(ft_strdup("0"));
	if (n < 0)
	{
		n = -n;
		z = n;
		i = 1;
	}
	else
	{
		z = n;	
		i = 0;
	}
	while(z > 0)
	{
		z = z/10;
		i++;
	}	
	if(!(itoa_buffer = (char *)malloc((i+1)*sizeof(char))))
		return(0);
	itoa_buffer[i] = '\0';	
	while(i--)
	{	
		x = (n%10 + '0');
		itoa_buffer[i] = x;
		n = n/10;
		if(n == 0 && i == 1)
		{
			i--;
			itoa_buffer[i] = '-';
			break;
		}
	}
	return(itoa_buffer);
}
