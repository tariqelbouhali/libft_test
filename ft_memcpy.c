#include <string.h>

void	*ft_memcpy(void	*dest, void *src, size_t n)
{
	unsigned int i;
	char *dest1;
	char *src1;

	dest1 = (char *) dest;
	src1 = (char *) src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}


#include <stdio.h>

int	main(void)
{
	char *str;
	char dest[50];
	char *rest;

	str = "The original string";
	rest = (char *) ft_memcpy(dest, str, 12);
	//rest = memcpy(dest, str, 12);
	rest[12] = '\0';
	printf("%s\n", rest);
	return (0);
}
