#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t j;
	size_t last;
	int flag;
	char *dest;

	i = 0;
	dest = (char *) s;
	while (s[i] != '\0')
		i++;
	j = 0;
	last = 0;
	flag = 0;
	while (j <= i)
	{
		if ((unsigned char) c == dest[j])
		{
			flag = 1;
			last = j;
		}	
		j++;
	}
	if (flag)
		return (&dest[last]);
	return (0);
}

int main(void)
{
	char *str;

	str = "hello world!";
	printf("%s\n", strrchr(str, 'l'));
	printf("%p\n", strrchr(str, 'q'));
	printf("%s\n", ft_strrchr(str, 'l'));
	printf("%p\n", ft_strrchr(str, 'q'));
	return (0);
}
