/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:35:46 by ptran             #+#    #+#             */
/*   Updated: 2026/02/15 15:19:05 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	j = 0;
	if (nb == 0)
		return (dest);
	while (src[j] && j < nb)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';
	return (dest);
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
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*dest;
	char	str[10];

	str[0] = 'e';
	str[1] = 'f';
	str[2] = 'g';
	str[3] = '\0';

	dest = str;
	char	src[] = "abcd";
	if (ft_strncat(dest,src,3) != strncat(dest,src,3))
		printf("pas bon");
	//printf("%s",ft_strncat(dest, src, 4));
	return (0);
}*/
