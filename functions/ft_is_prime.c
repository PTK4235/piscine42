/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 09:10:57 by ptran             #+#    #+#             */
/*   Updated: 2026/02/16 09:10:57 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb);

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
	printf("%d\n", ft_is_prime(10));
}
