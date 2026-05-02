/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 20:15:46 by ptran             #+#    #+#             */
/*   Updated: 2026/02/15 18:36:12 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;

	i = ft_strlen(dest);
	if (size == 0)
		return (i + ft_strlen(src));
	j = 0;
	if (i >= size)
		return (ft_strlen(src) + size);
	while (src[j] && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

unsigned int	ft_strlen(char *str)
{
	unsigned int		ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		ctr++;
	}
	return (ctr);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[7] = "ab";
	char	dest2[7] = "ab";

	char	src[] = "abcdefge";

	printf("%d\n",ft_strlcat(dest,src,sizeof(dest)));
	printf("%ld\n",strlcat(dest2,src,sizeof(dest2)));
	printf("%s\n", dest);
	printf("%s\n", dest2);
	

	//printf("%d",ft_strlcat(dest,src,sizeof(dest)));
	//printf("%ld",strlcat(dest,src,sizeof(dest)));

	return (0);
}*/