/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 20:57:41 by ptran             #+#    #+#             */
/*   Updated: 2026/02/15 21:00:03 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb);
int	aux(int nb, int ret);

int	ft_recursive_factorial(int nb)
{
	return (aux(nb, 1));
}

int	aux(int nb, int ret)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (ret);
	return (aux(nb - 1, ret * nb));
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_factorial(12));
	printf("%d\n", ft_recursive_factorial(2));
	printf("%d\n", ft_recursive_factorial(0));

}
