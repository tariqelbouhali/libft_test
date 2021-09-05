#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned int i;
	char *temp;
	char *str1;
	char *str2;

	temp = NULL;
	temp = (char *) malloc(sizeof(char) * n);
	if (temp == NULL)
		return (dest);
	str1 = (char *) dest;
	str2 = (char *) src;
	i = 0;
	while (i < n)
	{
		temp[i] = str2[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		str1[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}



int	main(void)
{
	char	dest[20];
	char	*src;

	src = "hello world!";
	ft_memmove(dest, src, 6);
	printf("%s\n", dest);	
	return (0);
}
