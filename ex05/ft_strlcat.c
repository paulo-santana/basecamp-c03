unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		if (i >= size)
			break ;
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		if ((int)(size - i) > 1)
			dest[i] = src[j];
		i++;
		j++;
	}
	if (size > i)
		dest[i] = '\0';
	return (i);
}
