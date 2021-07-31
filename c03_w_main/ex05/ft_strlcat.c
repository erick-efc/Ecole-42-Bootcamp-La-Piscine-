unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while ((src[j]) && (j < (size - 1)))
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (j);
}
