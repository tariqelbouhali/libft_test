#include <stdio.h>
#include <string.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*dest;
	
	i = 0;
	dest = (unsigned char *) s;
	while (i < n && *dest != (unsigned char) c)
	{
		printf("%ld\t%c\n", i, *dest);
		i++;
		dest++;
	}
	if (*dest == (unsigned char) c)
		return ((void *) dest);
	return (0);
	//return ((void *) 0);
}

int	main(void)
{
	char *str;
	char *dest;

	dest = NULL;
	str = "searching a char";
	dest = ft_memchr(str, 103, 13);
	if (dest == NULL)
		printf("%p\n", ft_memchr(str, 103, 13));
	else
		printf("%s\n", (char *)ft_memchr(str, 103, 13));
	return (0);
}
