/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:10:15 by ptran             #+#    #+#             */
/*   Updated: 2026/02/16 12:10:15 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	**ft_sort_int_tab(char **tab, int size);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);

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

char	**ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) == 1)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

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

int	main(int argc, char **argv)
{
	int		i;
	char	**tab;

	tab = ft_sort_int_tab(++argv, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		write(1, tab[i], ft_strlen(tab[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
