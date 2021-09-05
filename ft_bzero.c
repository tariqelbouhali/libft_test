#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char		*dest;

	i = 0;
	dest = (char *) s;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}


int	main(void)
{
	char	dest[40] = "hello world this out test";
	int	i;
	
	i = 0;
	ft_bzero(dest, 5);
	//bzero(dest, 5);
	while (i < 8)
	{
		printf("%d\n", (int)dest[i]);
		i++;
	}
	return (0);
}
