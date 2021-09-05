#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	printf("%ld\n", ft_strlen("ft_strlen"));
	return (0);
}
