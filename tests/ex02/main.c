#include <stdio.h>
#include <string.h>
#include "./ft_strcat.c"

int	main(void)
{
	char *src = "slk kkk";
	char dest[30];
	char *result;

	for (int i = 0; i < 30; i++)
		if (i < 4)
			dest[i] = 'a';
		else
			dest[i] = '\0';
	printf("sua funcao:\n");
	printf("src:      %s\n", src);
	printf("dest:     %s\n", dest);

	result = ft_strcat(dest, src);
	printf("result:   %s\n", dest);
	printf("returned: %s\n", result);
	printf("\n");

	dest[4] = '\0';
	printf("funcao original:\n");
	printf("src:      %s\n", src);
	printf("dest:     %s\n", dest);

	result = strcat(dest, src);
	printf("result:   %s\n", dest);
	printf("returned: %s\n", result);
	printf("\n");
}
