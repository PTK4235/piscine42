/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 21:38:50 by ptran             #+#    #+#             */
/*   Updated: 2026/02/15 22:32:27 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(18));
	printf("%d", ft_sqrt(2147395600));


	return (0);
}
