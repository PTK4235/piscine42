/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:37:33 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 11:44:15 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;
	int		i;

	i = 48;
	while (i < 58)
	{
		c = (char) i;
		write(1, &c, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (1);
// }
