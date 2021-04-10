#include <stdio.h>
#include "./ft_strstr.c"

int	main(void)
{
	char *haystack = "nossa slk";
	char *needle = "ssa";
	char *wrong_needle = "sse";

	char *result = ft_strstr(haystack, needle);

	printf("result: %s\n", result);
}
