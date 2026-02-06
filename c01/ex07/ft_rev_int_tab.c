/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 06:30:42 by ptran             #+#    #+#             */
/*   Updated: 2026/02/06 06:30:46 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		*temp;
	int		i;

	i = 0;
	while (i < size)
	{
		temp[i] = tab[size - i - 1];
		i++;
	}
	tab = temp;
}

int	main(int argc, char **argv)
{
	int		tab[3];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	ft_rev_int_tab(tab, 3);
	return (0);
}
