char	*ft_strlcpy(char *dest, char *src, unsigned int n);

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	n--;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
