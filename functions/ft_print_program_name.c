/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:37:59 by ptran             #+#    #+#             */
/*   Updated: 2026/02/16 11:37:59 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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

int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	write(1, argv[0], ft_strlen(argv[0]));
	write(1, "\n", 1);
	return (0);
}
