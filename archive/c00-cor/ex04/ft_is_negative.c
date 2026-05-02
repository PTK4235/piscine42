/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 11:39:03 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 11:44:34 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	r;

	if (n < 0)
	{
		r = 'N';
		write(1, &r, sizeof(r));
		return ;
	}
	else
	{
		r = 'P';
		write(1, &r, sizeof(r));
		return ;
	}
}

// int	main(int argc, char *argv[])
// {
// 	ft_is_negative(-42);
// 	ft_is_negative(0);
// 	ft_is_negative(42);

// }
