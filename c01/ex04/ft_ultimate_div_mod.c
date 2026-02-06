/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 05:09:43 by ptran             #+#    #+#             */
/*   Updated: 2026/02/06 05:15:55 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(int argc, char const *argv[])
{
	int		*a;
	int		*b;

	*a = 10;
	*b = 3;
	ft_ultimate_div_mod(a, b);
	printf("*a = %d, *b = %d",*a,*b);
	return (0);
}
