#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len_src;
	size_t len_dst;


	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	i = len_dst;
	j = 0;
	while (i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < i)
		return (size + len_src);
	else
		return (len_dst + len_src);
}

int	main(void)
{
	char dest[30] = "hello";
	char dest1[30] = "hello";
	char src[20] = " world!!";
	printf("%ld\n", ft_strlcat(dest, src, 3));
	printf("%ld\n", strlcat(dest1, src, 3));
	printf("%s\n", dest);
	printf("%s\n", dest1);
	return (0);
}
