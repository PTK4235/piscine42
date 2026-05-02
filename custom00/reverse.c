char	*reverse(char *str, int size)
{
	int		i;
	char	temp;

	i = -1;
	while (++i < size - i)
	{
		temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
	}
	return str;
}
