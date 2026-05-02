/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 06:30:42 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 12:12:11 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
// int	main(int argc, char **argv)
// {
// 	int		tab[3];
// 	int		*ptr = tab;

// 	tab[0] = 1;
// 	tab[1] = 2;
// 	tab[2] = 3;

// 	ft_rev_int_tab(ptr, 3);
// 	printf("%d", tab[0]);
// 	printf("%d", tab[1]);
// 	printf("%d", tab[2]);
// 	return (0);
// }
