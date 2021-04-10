char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int dest_size;

	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;

	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
