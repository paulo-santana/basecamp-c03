/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:22:08 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/13 11:30:28 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strncmp.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	test(char *str1, char *str2, unsigned int size)
{
	int		res1;
	int		res2;

	res1 = strncmp(str1, str2, size);

	if (res1 == 0) {
		printf("   strncmp: %s and %s are equal", str1, str2);
		printf(" in the first %d bytes\n", size);
	} else if (res1 < 0) {
		printf("   strncmp: %s is less than %s (%d)\n", str1, str2, res1);
	} else {
		printf("   strncmp: %s is greater than %s (%d)\n", str1, str2, res1);
	}

	res2 = ft_strncmp(str1, str2, size);
	if (res2 == 0) {
		printf("ft_strncmp: %s and %s are equal", str1, str2);
		printf(" in the first %d bytes\n", size);
	} else if (res2 < 0) {
		printf("ft_strncmp: %s is less than %s (%d)\n", str1, str2, res2);
	} else {
		printf("ft_strncmp: %s is greater than %s (%d)\n", str1, str2, res2);
	}
}

int	main(void)
{
	char	*str1;
	char	*str2;
	int		size;

	str1 = "ABC";
	str2 = "ABC";
	size = 3;
	test(str1, str2, size);
	size = 2;
	test(str1, str2, size);
	size = 8888;
	test(str1, str2, size);

	str1 = "ABC";
	str2 = "ABZ";
	size = 3;
	test(str1, str2, size);
	size = 2;
	test(str1, str2, size);
	size = 8888;
	test(str1, str2, size);

	str1 = "ABZ";
	str2 = "ABA";
	size = 3;
	test(str1, str2, size);
	size = 2;
	test(str1, str2, size);
	size = 8888;
	test(str1, str2, size);

	str1 = "AB";
	str2 = "ABA";
	size = 3;
	test(str1, str2, size);
	size = 2;
	test(str1, str2, size);
	size = 8888;
	test(str1, str2, size);

	str1 = "ABC";
	str2 = "AB";
	size = 3;
	test(str1, str2, size);
	size = 2;
	test(str1, str2, size);
	size = 1888888;
	test(str1, str2, size);

	str1 = "early0\0aaaa";
	str2 = "early0\0aaaa";
	size = 3;
	test(str1, str2, size);
	size = 2;
	test(str1, str2, size);
	size = 1888888;
	test(str1, str2, size);

	exit(EXIT_SUCCESS);
}
