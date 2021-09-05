#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = NULL;
	i = 0;
	while (s[i])
		i++;
	dest = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	if (dest)
	{
		while (s[i])
		{
			dest[i] = s[i];
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char *str = "ft_strdup";
	char *dest = NULL;
	
	dest = ft_strdup(str);
	printf("%s\n", dest);
	return (0);
}
