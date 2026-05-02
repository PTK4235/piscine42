/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 16:18:04 by ptran             #+#    #+#             */
/*   Updated: 2026/02/06 20:10:09 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	map_int_to_str(int i, char *str, int idx1, int idx2);
void	last_char(int i, int j, char *str);
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	str[7];

	i = 0;
	str[2] = ' ';
	while (i < 100)
	{
		map_int_to_str(i, str, 0, 1);
		j = i + 1;
		while (j < 100)
		{
			map_int_to_str(j, str, 3, 4);
			last_char(i, j, str);
			j++;
		}
		i++;
	}
}

void	map_int_to_str(int i, char *str, int idx1, int idx2)
{
	if (i < 10)
	{
		str[idx1] = '0';
		str[idx2] = i + '0';
	}
	else
	{
		str[idx1] = i / 10 + '0';
		str[idx2] = i % 10 + '0';
	}
}

void	last_char(int i, int j, char *str)
{
	if (i == 98 && j == 99)
	{
		str[5] = '\0';
		write(1, str, 5);
		return ;
	}
	str[5] = ',';
	str[6] = ' ';
	str[7] = '\0';
	write(1, str, 7);
}

// int	main(int argc, char **argv)
// {
// 	ft_print_comb2();
// 	return (0);
// }
