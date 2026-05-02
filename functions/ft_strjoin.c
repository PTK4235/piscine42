/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:31:04 by ptran             #+#    #+#             */
/*   Updated: 2026/02/26 13:46:25 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		len_all;

	if (size == 0)
	{
		ret = malloc(1);
		ret[0] = '\0';
		return (ret);
	}
	i = 0;
	len_all = 0;
	while (i < size)
		len_all += ft_strlen(strs[i++]);
	len_all += (size - 1) * ft_strlen(sep);
	ret = malloc(sizeof (char) * len_all + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(ret, strs[i]);
		if ((i++) != size - 1)
			ft_strcat(ret, sep);
	}
	ret[len_all] = '\0';
	return (ret);
}

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

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int main (void)
{
	char	*test;

	char *tab[3] = {"azeaaz","cxcvx", "vdfww"};
	test = ft_strjoin(3,tab," , ");
	printf("%s", test);
}*/
