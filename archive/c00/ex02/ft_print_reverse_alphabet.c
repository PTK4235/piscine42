/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:35:34 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 11:43:10 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	i = 122;
	while (i > 96)
	{
		c = (char) i;
		write(1, &c, 1);
		i--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (1);
// }
