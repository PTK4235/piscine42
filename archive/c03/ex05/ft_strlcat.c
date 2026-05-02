/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 20:15:46 by ptran             #+#    #+#             */
/*   Updated: 2026/02/12 20:15:46 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(dest) + ft_strlen(dest));
	}
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && (i + j) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(dest) + ft_strlen(dest));
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

int	main(int argc, char **argv)
{
	char	dest[7];

	char	src[] = "abcd";
	if (ft_strlcat(dest,src,sizeof(dest)) != ft_strlcat(dest,src,sizeof(dest)))
		printf("pas bon");
	return (0);
}*/