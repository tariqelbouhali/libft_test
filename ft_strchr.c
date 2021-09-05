#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	size_t j;
	char *dest;

	i = 0;
	dest = (char *) s;
	while (s[i] != '\0')
		i++;
	j = 0;
	while (j <= i)
	{
		if ((unsigned char) c == dest[j])
			return (&dest[j]);
		j++;
	}
	return (0);
}

int main(void)
{
	char *str;

	str = "hello world!";
	printf("%d\n", (int)(*ft_strchr(str, '\0')));
	return (0);
}
