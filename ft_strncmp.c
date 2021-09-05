#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char *str1 = "hello";
	char *str2 = "hello";
	char *str3 = "Hello";
	char *str4 = "hello";
	char *str5 = "hello";
	char *str6 = "Hello";
	char *str7 = "abc";
	char *str8 = "efg";
	char *str9 = "";
	char *str10 = "";
	char *str11 = "ijh";
	char *str12 = "";
	char *str13 = "";
	char *str14 = "ijh";
	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%d\n", ft_strncmp(str3, str4, 4));
	printf("%d\n", ft_strncmp(str5, str6, 4));
	printf("%d\n", ft_strncmp(str7, str8, 2));
	printf("%d\n", ft_strncmp(str9, str10, 3));
	printf("%d\n", ft_strncmp(str11, str12, 2));
	printf("%d\n", ft_strncmp(str13, str14, 2));
	printf("----------------------\n");
	printf("%d\n", strncmp(str1, str2, 4));
	printf("%d\n", strncmp(str3, str4, 4));
	printf("%d\n", strncmp(str5, str6, 4));
	printf("%d\n", strncmp(str7, str8, 2));
	printf("%d\n", strncmp(str9, str10, 3));
	printf("%d\n", strncmp(str11, str12, 2));
	printf("%d\n", strncmp(str13, str14, 2));
	return (0);
}
