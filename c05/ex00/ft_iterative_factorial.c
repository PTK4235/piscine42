/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:04:07 by ptran             #+#    #+#             */
/*   Updated: 2026/02/15 20:54:48 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int		ret;

	ret = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		ret *= nb - 1;
		nb--;
	}
	return (ret);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(0));

}
