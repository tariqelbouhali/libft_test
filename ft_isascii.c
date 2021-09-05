#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if ((unsigned char) c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	int i;

	i = -10;
	while (i < 150)
	{
		printf("origin = %d\n", isascii(i));
		printf("copy = %d\n", ft_isascii(i));
		i++;
	}
	return (0);
}
