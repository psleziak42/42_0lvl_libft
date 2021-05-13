#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sizedst)
{
	unsigned int i;
	unsigned int j;
	unsigned int c;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while (dst[i] != '\0')
		i++;
	if (sizedst > i)
		c = i + j;
	else
		c = j + sizedst;
	j = 0;
	while (src[j] != '\0' && i + 1 < sizedst)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (c);
}
