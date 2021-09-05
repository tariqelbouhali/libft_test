#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest); 
}

int	main(void)
{

	char dest[20] = "ft_str";
	char src[20] = "cat";

	printf("%s\n", ft_strcat(dest, src));
	return(0);
}
