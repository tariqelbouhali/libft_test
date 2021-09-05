#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + (nptr[i] - 48);
		i++;
	}
	return (nbr * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi("\t\f\n\r\v -123hdgf"));
	printf("%d\n", ft_atoi("\t\r\v\n\f +123hsld"));
	printf("%d\n", ft_atoi("\t\r\n\v\f -+--123jdgh"));
	printf("%d\n", ft_atoi("\t\r\n\v\f -hs33f"));
	printf("%d\n", ft_atoi("\t\r\n\v\f "));	
	printf("---------------------\n");
	printf("%d\n", atoi("\t\f\n\r\v -123hdgf"));
	printf("%d\n", atoi("\t\r\v\n\f +123hsld"));
	printf("%d\n", atoi("\t\r\n\v\f -+--123jdgh"));
	printf("%d\n", atoi("\t\r\n\v\f -hs33f"));
	printf("%d\n", atoi("\t\r\n\v\f "));
	return (0);
}
