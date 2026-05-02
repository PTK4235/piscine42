/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:26:39 by ptk               #+#    #+#             */
/*   Updated: 2026/02/10 11:44:50 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_print_comb(void);
void	comb(int i, int j, int k);

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	while (++i <= 9)
	{
		j = i;
		while (++j <= 9)
		{
			k = j;
			while (++k <= 9)
			{
				comb(i, j, k);
			}
		}
	}
}

void	comb(int i, int j, int k)
{
	char	str[6];

	if ((i != j) && (i != k) && (j != k))
	{
		str[0] = (char) i + 48;
		str[1] = (char) j + 48;
		str[2] = (char) k + 48;
		if (str[0] == '7' && str[1] == '8' && str[2] == '9')
		{
			write(1, str, 3);
			return ;
		}
		str[3] = ',';
		str[4] = ' ';
		write(1, str, 5);
	}
}

// int	main(int argc, char **argv)
// {
// 	ft_print_comb();
// 	return (0);
// }
