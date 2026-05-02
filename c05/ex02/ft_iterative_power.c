/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:04:08 by ptran             #+#    #+#             */
/*   Updated: 2026/02/15 21:04:08 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int		ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(2,3));
	printf("%d\n", ft_iterative_power(7,8));
	printf("%d\n", ft_iterative_power(-2,3));

	return (0);
}
