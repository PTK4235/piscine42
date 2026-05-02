/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:00 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 15:44:20 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*ptr;
	char	str[] = "123";

	ptr = str;
	if (ft_str_is_numeric(ptr) != 1){
		printf("error 123 is digits");
	}

	char	str2[] = "abc";
	ptr = str2;
	if (ft_str_is_numeric(ptr) != 0){
		printf("error abc is not digits");
	}
	char	str3[] = "a1";
	ptr = str3;
	if (ft_str_is_numeric(ptr) != 0){
		printf("error a1 is not digits");
	}

	char	str4[] = "";
	ptr = str4;
	if (ft_str_is_numeric(ptr) != 1){
		printf("error string empty");
	}

	return (0);
}*/