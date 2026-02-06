/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 05:02:18 by ptran             #+#    #+#             */
/*   Updated: 2026/02/06 05:08:45 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(int argc, char const *argv[])
{
	int		*div;
	int		*mod;

	ft_div_mod(10, 3, div, mod);
	printf("*div = %d, *mod = %d",*div,*mod);
	return (0);
}
