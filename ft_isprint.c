#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if ((unsigned char) c >= 32 && (unsigned char) c < 127)
		return (16384);
	return (0);
}

int	main(void)
{
	int i;

	i = -10;
	while (i < 150)
	{
		printf("origin = %d\t%d\n", isprint(i), i);
		printf("copy = %d\t%d\n", ft_isprint(i), i);
		i++;
	}
	return (0);
}
