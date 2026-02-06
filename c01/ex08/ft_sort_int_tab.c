/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 06:46:55 by ptran             #+#    #+#             */
/*   Updated: 2026/02/06 07:21:05 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		*tab;

	tab[0] = 3;
	tab[1] = 2;
	tab[2] = 0;
	ft_sort_int_tab(tab, 3);
	printf("%d,%d,%d", tab[0], tab[1], tab[2]);
	return (0);
}
