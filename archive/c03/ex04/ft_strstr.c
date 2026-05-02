/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:40:11 by ptran             #+#    #+#             */
/*   Updated: 2026/02/12 14:11:26 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int		i;

	i = 0;
	while (str[i])
	{
		if (ft_strncmp(&str[i], to_find, sizeof(to_find)) == 0)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}

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
	char	str[] = "bonjour";

	if (ft_strstr(str,"jour") != strstr(str,"jour"))
	{
		printf("pas bon");
	}
	return (0);
}*/