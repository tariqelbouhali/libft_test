#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if ((unsigned char) c >= 'A' && (unsigned char) c <= 'Z')
		c = c + 32;
	return (c);
}

int	main(void)
{
	int i;

	i = -10;
	while (i < 127)
	{
		printf("origin = %c\t%d\n", (char) tolower(i), i);
		printf("copy = %c\n", (char) ft_tolower(i));
		i++;
	}
	return (0);
}
