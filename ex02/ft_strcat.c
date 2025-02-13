char	*ft_strcat(char *dest, char *src)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}

/*#include <stdio.h>

int	main()

{
	char dest[25] = "Hello";
	char src[] = "! How are you?";

	printf("%s\n", ft_strcat(dest, src));
	return (0);
}*/
