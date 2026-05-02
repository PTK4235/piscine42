/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:39:05 by ptran             #+#    #+#             */
/*   Updated: 2026/02/14 11:39:05 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int					i;
	int					neg;
	unsigned int		ret;

	neg = 1;
	ret = 0;
	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg *= (-1);
	}
	while (str[i] >= '0' && str[i] <= '9')
		ret = ret * 10 + str[i++] - '0';
	if (str[i] != '\0')
		return (0);
	if (neg == -1 && ret > 2147483648)
		return ((2147483647 + (neg * ((int)(ret + 2147483648)))));
	else if (neg == 1 && ret > 2147483647)
		return ((((int)(ret - 2147483647)) - 2147483648));
	return ((neg * ((int)ret)));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("-2147483648 base10 : %d\n", ft_atoi("-2147483648"));
	printf("-2147483649 base10 : %d\n", ft_atoi("-2147483649"));
	printf("2147483647 base10 : %d\n", ft_atoi("2147483647"));
	printf("2147483648 base10 : %d\n", ft_atoi("2147483648"));
	printf("21474 83648 base10 : %d\n", ft_atoi("21474 83648"));
	printf("    ++--+2147483647 base10 : %d\n", ft_atoi("    ++--+2147483647"));
	printf("0 base10 : %d\n", ft_atoi("0"));
}*/
