#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;		
	i = 0;
	while (i < n && (str1[i] == str2[i])
		&& str1[i] && str2[i])
		i++;
	if (i < n)
		return (256 * (str1[i] - str2[i]));
	return (0);
}

int	main(void)
{
	printf("3 = %d\n", ft_memcmp("", "\0\0j", 4));
	//printf("4 = %d\n", ft_memcmp("abda", "abdb", 4));
	//printf("5 = %d\n", ft_memcmp("abcb", "abca", 4));
	//printf("5 = %d\n", ft_memcmp("abcc", "abca", 4));
	printf("----------------------------------\n");
	char *str1 = "abcsaass";
	char *str2 = "abcGaass";
	/*char *str3 = "abda";
	char *str4 = "abdb";
	char *str5 = "abcb";
	char *str6 = "abca";
	char *str7 = "abcc";
	char *str8 = "abca";*/
	printf("3 = %d\n", memcmp(str1, str2, 4));
	printf("4 = %d\n", memcmp("abcs", "abca", 4));
	//printf("5 = %d\n", memcmp(str5, str6, 4));
	//printf("5 = %d\n", memcmp(str7, str8, 4));
	return (0);
}
