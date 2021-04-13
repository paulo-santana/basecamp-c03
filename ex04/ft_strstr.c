/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psergio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:33:26 by psergio-          #+#    #+#             */
/*   Updated: 2021/04/13 11:55:41 by psergio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				str_matches(char *str, char *target)
{
	int	matches;
	int	to_find_pos;

	matches = 0;
	to_find_pos = 0;
	while (target[to_find_pos] != '\0')
	{
		if (target[to_find_pos] != str[to_find_pos])
		{
			matches = 0;
			to_find_pos++;
			break ;
		}
		else
		{
			matches = 1;
			to_find_pos++;
		}
	}
	return (matches);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (*str++ != 0)
		size++;
	return (size);
}

char			*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		matches;
	char	*match_start;

	i = 0;
	matches = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != 0)
	{
		match_start = &str[i];
		matches = str_matches(match_start, to_find);
		if (matches)
			return (match_start);
		i++;
	}
	return (0);
}
