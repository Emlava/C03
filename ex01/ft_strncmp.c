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
	unsigned char str1[] = "AB";
	unsigned char str2[] = "ABC";    // C = 67
	int n = 3; // 2 or less = 0, 3 or more = -67

	printf("%d\n", ft_strncmp(str1, str2, n));
	return (0);
}*/
