/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:23:46 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 18:13:10 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	char	str1[10];
	char	str2[] = "bonjour";
	int		n = 3;

	dest = str1;
	src = str2;

	printf("%s \n", strncpy(dest, src, n));
	printf("%s", ft_strncpy(dest, src, n));

	if (strncpy(dest, src, n) != ft_strncpy(dest, src, n))
		printf("error not equal");

	return (0);
}*/
