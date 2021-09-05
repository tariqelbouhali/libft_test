#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	unsigned char ch;

	ch = (unsigned char) c;
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (1024);
	return (0);
}

int	main()
{
	int i;

	i = 0;
	while (i < 225)
	{
		printf("d\n", ft_isalpha(i));
		i++;
	}
	return (0);
}
