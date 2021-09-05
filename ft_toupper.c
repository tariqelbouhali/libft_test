#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if ((unsigned char) c >= 'a' && (unsigned char) c <= 'z')
		c = c - 32;
	return (c);
}

int	main(void)
{
	int i;

	i = 0;
	while (i < 127)
	{
		printf("origin = %c\t%d\n", (char) toupper(i), i);
		printf("copy = %c\n", (char) ft_toupper(i));
		i++;
	}
	return (0);
}
