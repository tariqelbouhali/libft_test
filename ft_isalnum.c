#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	unsigned char ch;

	ch = (unsigned char) c;
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (8);	
	if (ch >= '0' && ch <= '9')
		return (8);
	return (0);
}

int	main(void)
{
	int i;

	i = 0;
	while (i < 127)
	{
		printf("origin = %d\n", isalnum(i));
		printf("copy = %d\n", ft_isalnum(i));
		i++;
	}
	return (0);
}
