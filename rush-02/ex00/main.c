/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourbai <mpourbai@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:27:12 by mpourbai          #+#    #+#             */
/*   Updated: 2026/02/22 20:54:18 by smiuccio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/all_header.h"

int	main(int ac, char **av)
{
	t_dict	*dict;
	char	**tab;
	char	*res;
	char	*buf;

	(void)ac;
	(void)av;
	buf = NULL;
	tab = NULL;
	tab = parsing_number(av[1], tab);
	buf = read_to_tab(buf, "numbers.dict");
	dict = create_struct(buf);
	free(buf);
	res = get_nbr_to_str(dict, tab, av[1]);
	ft_putstr(res);
}
//
//
//
// TODO : gerer le cas de 3 ac pour dico
// if (ac == 3) ...
//
// int	main(int ac, char **av)
// {
// 	char	**str;
// 	int		ceil_n;
// 	int		*ceil;
// 	int		i;
//
// 	str = NULL;
// 	if (ac < 2 || ac > 3)
// 	{
// 		write (1, "Error!\n", 7);
// 		return (0);
// 	}
//
// 	ceil_n = 0;
// 	ceil = &ceil_n;
//
// 	str = parsing_number(av[1], str, ceil);
// 	i = 0;
// 	while (i < *ceil)
// 	{
// 		printf("%s \n", str[i]);
// 		i++;
// 	}
// 	return (1);
// }
