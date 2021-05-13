#include "libft.h"
#include<stdio.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
/*{
	unsigned char *x;
	
	x = (unsigned char *)dest;
	while(n--)
	{
		*x++ = *(unsigned char *)src;
		if(*(unsigned char *)src++==(unsigned char )c)
			return((char*)src);
	}
	return(0);
}*/
{
	size_t i;
	unsigned char *x;
	unsigned char *y;
	
	x = (unsigned char *)dest;
	y = (unsigned char *)src;

	i = 0;
	while (i < n)
	{
		x[i] = y[i];
		if (y[i] == (unsigned char)c)
		{
			i++;
			return ((char *)&x[i]);
		}
		i++;
	}
	return NULL;
}
/*
int main()
{
	char a[100];
	char b[] = "coucou";
	int c = 'c';
	size_t n = 10;

	a[0] = 'A';	
	ft_memccpy(a, b, c, n);
	printf("a0: %c\n", a[0]);
	printf("a1: %c\n", a[1]);
}*/
