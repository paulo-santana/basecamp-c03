#include <stdio.h>
#include <string.h>
#include "./ft_strncat.c"

int	main(void)
{
	char *src = "slk kkk";
	char dest[30];
	char *result;

	for (int i = 0; i < 4; i++)
		dest[i] = 'a';
	printf("sua funcao:\n");
	printf("src:      %s\n", src);
	printf("dest:     %s\n", dest);

	result = ft_strncat(dest, src, 12);
	printf("result:   %s\n", dest);
	printf("returned: %s\n", result);
	printf("\n");

	dest[4] = '\0';
	printf("funcao original:\n");
	printf("src:      %s\n", src);
	printf("dest:     %s\n", dest);

	result = strncat(dest, src, 12);
	printf("result:   %s\n", dest);
	printf("returned: %s\n", result);
	printf("\n");
}
