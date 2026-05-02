/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 15:48:37 by ptran             #+#    #+#             */
/*   Updated: 2026/02/11 15:48:37 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	
	if (ft_strncmp("ado","ado",3), strncmp("ado","ado",3))

		printf("pas bon\n");
	if (ft_strncmp("","ado",3) != strncmp("","ado",3))
	{
		printf("%d,%d\n", ft_strncmp("","ado",3),strncmp("","ado",3));
		printf("pas bon1\n");
	}

	if (ft_strncmp("123","ado",3) != strncmp("123","ado",3))
	{
		printf("pas bon2\n");
	}

	if (strncmp("best","ado",4) != strncmp("best","ado",4))
	{
		printf("pas bon3");
	}

	return (0);
}
	*/