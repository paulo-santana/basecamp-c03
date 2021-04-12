#include <stdio.h>
#include <string.h>
#include "./ft_strstr.c"

int	main(void)
{
	char *haystack = "nossa slk";
	char *needle = "ssa";
	char *wrong_needle = "sse";
	char *empty_needle = "";

	printf(" -- sua funcao --\n");
	char *result = ft_strstr(haystack, needle);
	printf("right result: %s\n", result);
	result = ft_strstr(haystack, wrong_needle);
	printf("wrong result: %s\n", result);
	result = ft_strstr(haystack, empty_needle);
	printf("empty result: %s\n", result);

	printf(" -- funcao original --\n");
	result = strstr(haystack, needle);
	printf("right result: %s\n", result);
	result = strstr(haystack, wrong_needle);
	printf("wrong result: %s\n", result);
	result = strstr(haystack, empty_needle);
	printf("empty result: %s\n", result);
}
