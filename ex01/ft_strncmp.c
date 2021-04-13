/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 13:11:15 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/13 11:35:16 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;
	unsigned char	c1;
	unsigned char	c2;
	int				diff;

	if (n == 0)
		return (0);
	counter = 0;
	while (counter < n && (s1[counter] || s2[counter]))
	{
		c1 = s1[counter];
		c2 = s2[counter];
		diff = c1 - c2;
		if (diff != 0)
			return (diff);
		counter++;
	}
	return (0);
}
