/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 05:16:34 by ptran             #+#    #+#             */
/*   Updated: 2026/02/06 05:49:53 by ptk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str, sizeof(str) + 1);
}

int	main(int argc, char const *argv[])
{
	char	*str;

	str = "test";
	ft_putstr(str);
	return (0);
}
