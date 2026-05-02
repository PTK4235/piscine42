/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 16:29:07 by ptran             #+#    #+#             */
/*   Updated: 2026/02/11 18:32:32 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
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
		if (ft_strcat(dest,src) != ft_strcat(dest,src))
			printf("pas bon");
	return (0);
}*/