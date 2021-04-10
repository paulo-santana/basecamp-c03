char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int	matched = 0;
	char *match_start;

	while (str[i] != 0)
	{
		to_find_pos = 0;
		while (str[i + to_find_pos] == to_find[to_find_pos])
		{
			str[i] + to_find
		}
	}
	if (matched)
		return (match_start);

	return NULL;
}
