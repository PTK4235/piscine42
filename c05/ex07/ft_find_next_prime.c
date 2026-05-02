/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:29:56 by ptran             #+#    #+#             */
/*   Updated: 2026/02/16 09:29:56 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		if (nb % 2 != 0)
			nb += 2;
		else
			nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb % i != 0)
	{
		if (i % 2 != 0)
			i += 2;
		else
			i++;
	}
	if (i == nb)
		return (1);
	return (0);
}
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_find_next_prime(46));
}