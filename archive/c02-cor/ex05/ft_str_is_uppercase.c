/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:07 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 12:24:07 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	if (ft_str_is_uppercase(ptr) != 0){
		printf("error 123 is digits");
	}

	char	str2[] = "abc";
	ptr = str2;
	if (ft_str_is_uppercase(ptr) != 0){
		printf("error abc is lowercase only");
	}

	char	str3[] = "ABc";
	ptr = str3;
	if (ft_str_is_uppercase(ptr) != 0){
		printf("error ABc have 1 lowercase");
	}

	char	str4[] = "";
	ptr = str4;
	if (ft_str_is_uppercase(ptr) != 1){
		printf("error empty str");
	}

	char	str5[] = "ABC";
	ptr = str5;
	if (ft_str_is_uppercase(ptr) != 1){
		printf("error ABC is uppercase only");
	}
	return (0);
}*/