/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:10:58 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 11:38:16 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		count_nbr(int nb, int size);
int		expos(int n, int exp);
int		zero_or_neg(int nb, char *ptr, int i);

void	ft_putnbr(int nb)
{
	int		i;
	int		rem;
	int		max;
	char	*ptr;
	char	c;

	ptr = &c;
	max = count_nbr(nb, 0) - 1;
	if (!zero_or_neg(nb, ptr, i))
		return ;
	if (nb < 0)
		nb = 0 - nb;
	while (max > 0)
	{
		*ptr = (char)((nb / expos(10, max--)) % 10 + 48);
		write(1, ptr, 1);
	}
	*ptr = (char)(nb % 10 + 48);
	write(1, ptr, 1);
}

int	count_nbr(int nb, int size)
{
	if (nb < 0)
		nb = 0 - nb;
	if (nb <= 9)
		return (size + 1);
	size++;
	count_nbr(nb / 10, size);
}

int	expos(int n, int exp)
{
	if (exp == 0)
		return (1);
	else if (exp <= 1)
		return (n);
	expos(n + n, exp - 1);
}

int	zero_or_neg(int nb, char *ptr, int i)
{
	if (nb == 0)
	{
		*ptr = '0';
		write(1, ptr, 1);
		return (0);
	}
	i = 0;
	if (nb < 0)
	{
		*ptr = '-';
		write(1, ptr, 1);
		return (-1);
	}
}

// int	main(int argc, char **argv)
// {
// 	ft_putnbr(-42);
// 	ft_putnbr(0);
// 	ft_putnbr(42);
// 	return (0);
// }
