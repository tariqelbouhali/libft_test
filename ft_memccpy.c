#include <string.h>

void	*ft_memccpy(void *s1, void *s2, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	i = 0;
	while (str2[i] != ((unsigned char) c) && i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = str2[i];
	return (s1);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str2 = "hello world";
	char str1[20];
	int i;

	//ft_memccpy(str1, str2, 'w', 9);
	memccpy(str1, str2, 'w', 9);
	i = 0;
	while (i < 9)
	{
		printf("%c\n", str1[i]);
		i++;
	}
	return (0);
}
