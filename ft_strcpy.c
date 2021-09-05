#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char *src = "ft_strccpy";
	char dest[20];

	printf("%s\n",ft_strcpy(dest, src));
	return (0);
}
