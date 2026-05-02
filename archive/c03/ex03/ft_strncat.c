/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:35:46 by ptran             #+#    #+#             */
/*   Updated: 2026/02/11 18:36:31 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && (i + j) < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*dest;
	char	str[7];

	str[0] = 'e';
	str[1] = 'f';
	str[2] = 'g';
	str[3] = 'h';
	str[4] = '\0';


	dest = str;
	char	src[] = "abcd";
	if (ft_strncat(dest,src,sizeof(dest)) != ft_strncat(dest,src,sizeof(dest)))
		printf("pas bon");
	return (0);
}*/