char	*ft_strstr(char *str, char *to_find)
{
	int		i = 0;
	int		matched = 0;
	int		to_find_pos = 0;
	char	*match_start;

	while (str[i] != 0)
	{
		to_find_pos = 0;
		match_start = &str[i];
		while (to_find[to_find_pos] != '\0') {
			if (to_find[to_find_pos] != match_start[to_find_pos])
			{
				matched = 0;
				to_find_pos++;
				break ;
			}
			else
			{
				matched = 1;
				to_find_pos++;
			}
		}
		if (matched)
			return (match_start);
		i++;
	}
	return NULL;
}
