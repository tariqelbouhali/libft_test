#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (little[0] == '\0')
		return ((char *) big);
	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && j < len)
				j++;
		}
		if (j == len)
			return ((char *) &big[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *src;
	char *find;

	src = "Hello world!, can you find this word!!";
	find = "find this";
	printf("%s\n", ft_strnstr(src, find, 4));
	printf("%p\n", ft_strnstr(src, "finds", 8));
	printf("%s\n", ft_strnstr(src, "", 4));
	//printf("%s\n", strnstr(src, find, 4));
	//printf("%p\n", strnstr(src, "finds", 8));
	//printf("%s\n", strnstr(src, "", 4));
	return (0);
}
