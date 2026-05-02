/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:21:02 by ptran             #+#    #+#             */
/*   Updated: 2026/02/11 15:44:06 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	
	if (ft_strcmp("ado","ado"), strcmp("ado","ado"))
		printf("pas bon\n");
	if (ft_strcmp("","ado") != strcmp("","ado"))
	{
		printf("%d,%d\n", ft_strcmp("","ado"),strcmp("","ado"));
		printf("pas bon1\n");
	}

	if (ft_strcmp("123","ado") != strcmp("123","ado"))
	{
		printf("%d,%d\n", ft_strcmp("b","ado"),strcmp("b","ado"));
		printf("pas bon2\n");
	}

	if (ft_strcmp("best","ado") != strcmp("best","ado"))
	{
		printf("%d,%d\n", ft_strcmp("best","ado"),strcmp("bbest","ado"));
		printf("pas bon3");
	}

	return (0);
}*/
