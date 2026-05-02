/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:04:54 by ptran             #+#    #+#             */
/*   Updated: 2026/02/15 21:04:54 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power);
int	aux(int nb, int power, int ret);

int	ft_recursive_power(int nb, int power)
{
	return (aux(nb, power, 1));
}

int	aux(int nb, int power, int ret)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (ret * nb);
	return (aux(nb, power - 1, ret * nb));
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_recursive_power(2, 3));
	printf("%d\n",ft_recursive_power(7, 8));
	printf("%d\n",ft_recursive_power(-2, 3));
	printf("%d\n",ft_recursive_power(-2, -2));


}
