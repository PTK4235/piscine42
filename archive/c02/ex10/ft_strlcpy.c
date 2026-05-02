/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:25 by ptran             #+#    #+#             */
/*   Updated: 2026/02/11 10:38:28 by ptk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;

	i = 0;
	if (size == 0)
	{
		return ((unsigned int)(ft_strlen(src)));
	}
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ((unsigned int)(ft_strlen(src)));
}

int	ft_strlen(char *str)
{
	int		ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		ctr++;
	}
	return (ctr);
}
/*
int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	char	str1[10];
	char	str2[] = "bonjour";
	int		n = 0;

	dest = str1;
	src = str2;

	printf("%d \n", strlcpy(dest, src, n));
	printf("%d \n", ft_strlcpy(dest, src, n));
	printf("dest = %s \n",dest);

	if (strlcpy(dest, src, n) != ft_strlcpy(dest, src, n))
		printf("error not equal");


	n = 4;

	printf("%d \n", strlcpy(dest, src, n));
	printf("%d \n", ft_strlcpy(dest, src, n));
	printf("dest = %s",dest);

	if (strlcpy(dest, src, n) != ft_strlcpy(dest, src, n))
		printf("error not equal");

	return (0);
}*/
