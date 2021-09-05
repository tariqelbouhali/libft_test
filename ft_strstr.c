#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j])
				j++;
		}
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *src;
	char *find;

	src = "Hello world!, can you find this word!!";
	find = "find";
	printf("%s\n", ft_strstr(src, find));
	printf("%p\n", ft_strstr(src, "fd"));
	printf("%s\n", ft_strstr(src, ""));
	printf("%s\n", strstr(src, find));
	printf("%p\n", strstr(src, "fd"));
	printf("%s\n", strstr(src, ""));
	return (0);
}
