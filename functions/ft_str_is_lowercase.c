/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:04 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 15:49:44 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(int argc, char **argv)
{
	char	*ptr;
	char	str[] = "123";

	ptr = str;
	if (ft_str_is_lowercase(ptr) != 0){
		printf("error 123 is digits");
	}

	char	str2[] = "abc";
	ptr = str2;
	if (ft_str_is_lowercase(ptr) != 1){
		printf("error abc is lowercase only");
	}

	char	str3[] = "ABc";
	ptr = str3;
	if (ft_str_is_lowercase(ptr) != 0){
		printf("error ABc is uppercase");
	}

	char	str4[] = "";
	ptr = str4;
	if (ft_str_is_lowercase(ptr) != 1){
		printf("error empty str");
	}

	return (0);
}*/