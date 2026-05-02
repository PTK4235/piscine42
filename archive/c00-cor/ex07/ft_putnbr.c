/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:10:58 by ptran             #+#    #+#             */
/*   Updated: 2026/02/11 09:57:13 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == 0)
	{
		c = '0';
		write (1, &c, 1);
		return ;
	}
	if (nb < 0)
	{
		c = '-';
		write(1, &c, 1);
		ft_putnbr(0 - nb);
		return ;
	}
	if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}

// int	main(int argc, char **argv)
// {
// 	ft_putnbr(-42);
// 	ft_putnbr(0);
// 	ft_putnbr(42);
// 	return (0);
// }
