/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:12:02 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/08 23:40:07 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;
	int	diff;
	while (*s1)
	{
		c1 = *s1;
		c2 = *s2;
		diff = c1 - c2;
		if (diff != 0)
			return diff;
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return *s1 - *s2;
	return 0;
}
