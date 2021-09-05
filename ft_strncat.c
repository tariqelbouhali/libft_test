#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < n)
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

	char dest[20] = "ft_strn";
	char src[20] = "cat";

	printf("%s\n", ft_strncat(dest, src, 3));
	return(0);
}
