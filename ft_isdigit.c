#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if ((unsigned char) c >= '0' && (unsigned char) c <= '9')
		return (2048);
	return (0);
}

int	main(void)
{
	int i;

	i = -10;
	printf("EOF = %d\n", (int)EOF);
	while (i < 127)
	{
		printf("origin = %d\n", isdigit(i));
		printf("copy = %d\n", ft_isdigit(i));
		i++;
	}
	return (0);
}
