/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 09:46:04 by ptran             #+#    #+#             */
/*   Updated: 2026/02/14 09:46:04 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char		rem;

	rem = (char)(nb % 10 + '0');
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		return (ft_putnbr(-nb));
	}
	else if (nb < 10)
	{
		write(1, &rem, 1);
		return ;
	}
	ft_putnbr(nb / 10);
	write(1, &rem, 1);
}
/*
int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	ft_putnbr(0);
}*/
