/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:30:15 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/12 12:30:48 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_size;

	dest_size = 0;
	while (dest[dest_size] != 0)
		dest_size++;
	while (*src != '\0')
	{
		dest[dest_size] = *src;
		dest_size++;
		src++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
