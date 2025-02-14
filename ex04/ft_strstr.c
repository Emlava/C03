char	*ft_strstr(char *str, char *to_find)
{
	char	*to_find_start;
	char	*str_prev_loc;

	to_find_start = to_find;
	while (*str)
	{
		str_prev_loc = str;
		while (*str == *to_find)
		{
			str++;
			to_find++;
			if (*to_find == '\0')
			{
				return (str_prev_loc);
			}
		}
		to_find = to_find_start;
		str++;
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	char haystack[] = "abcdefghi";
	char needle[] = "def";

	printf("%s\n", ft_strstr(haystack, needle));
	return (0);
}*/
