#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char *src = "ft_strccpy";
	char dest[20];

	printf("%s\n",ft_strncpy(dest, src, 7));
	return (0);
}
