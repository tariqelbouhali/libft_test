#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *) s;
	while (i < n)
	{
		dest[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

int main(void)
{
	char	dest[] = "tariq is here";
	size_t	size;
	int	i;

	size = 6;
	ft_memset(dest, 13, size);
	memset(dest, 13, size);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", (int)dest[i]);
		i++;
	}
	return (0);
}
//https://www.systutorials.com/docs/linux/man/3p-memset/
