#include <string.h>
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
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
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", ft_strcmp(str3, str4));
	printf("%d\n", ft_strcmp(str5, str6));
	printf("%d\n", ft_strcmp(str7, str8));
	printf("%d\n", ft_strcmp(str9, str10));
	printf("%d\n", ft_strcmp(str11, str12));
	printf("%d\n", ft_strcmp(str13, str14));
	printf("----------------------\n");
	printf("%d\n", strcmp(str1, str2));
	printf("%d\n", strcmp(str3, str4));
	printf("%d\n", strcmp(str5, str6));
	printf("%d\n", strcmp(str7, str8));
	printf("%d\n", strcmp(str9, str10));
	printf("%d\n", strcmp(str11, str12));
	printf("%d\n", strcmp(str13, str14));
	return (0);
}
