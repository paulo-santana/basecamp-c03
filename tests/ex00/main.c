/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:22:08 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/08 23:37:13 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcmp.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int
main(int argc, char *argv[])
{
	int	res1;
	int	res2;

	if (argc < 3) {
		fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (argc == 3)
	{
		res1= strcmp(argv[1], argv[2]);
		res2= ft_strcmp(argv[1], argv[2]);
	}
	else
		res1 = strncmp(argv[1], argv[2], atoi(argv[3]));

	if (res1 == 0) {
		printf("   strcmp: <str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	} else if (res1 < 0) {
		printf("   strcmp: <str1> is less than <str2> (%d)\n", res1);
	} else {
		printf("   strcmp: <str1> is greater than <str2> (%d)\n", res1);
	}

	if (res2 == 0) {
		printf("ft_strcmp: <str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	} else if (res2 < 0) {
		printf("ft_strcmp: <str1> is less than <str2> (%d)\n", res2);
	} else {
		printf("ft_strcmp: <str1> is greater than <str2> (%d)\n", res2);
	}

	exit(EXIT_SUCCESS);
}
