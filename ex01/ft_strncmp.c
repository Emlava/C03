int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 && *s2) && n > 1)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>

int	main(void)
{
	unsigned char str1[] = "Understandable"; // r = 114
	unsigned char str2[] = "Undesirable";    // s = 115
	int n = 7; // 4 or less = 0, 5 or more = -1

	printf("%d\n", ft_strncmp(str1, str2, n));
	return (0);
}*/
