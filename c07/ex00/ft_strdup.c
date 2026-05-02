/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 11:42:58 by ptran             #+#    #+#             */
/*   Updated: 2026/02/26 13:44:12 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*ret;
	int		i;

	i = 0;
	while (src[i])
		i++;
	ret = malloc(sizeof(char) * i + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
/*
#include <stdio.h>
int main(void)
{
	char *test;
	char str[] = "abcd";
	
	test = ft_strdup(str);
	printf("%s\n", test);
}*/
