/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:23:56 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 15:56:56 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int	main(int argc, char **argv)
// {
// 	char	*ptr;
// 	char	str[] = "123";

// 	ptr = str;
// 	if (ft_str_is_alpha(ptr) != 0){
// 		printf("error 123 is digits");
// 	}

// 	char	str2[] = "abc";
// 	ptr = str2;
// 	if (ft_str_is_alpha(ptr) != 1){
// 		printf("error abc is alpha");
// 	}
// 	char	str3[] = "a1";
// 	ptr = str3;
// 	if (ft_str_is_alpha(ptr) != 0){
// 		printf("error a1 is not digits");
// 	}

// 	char	str4[] = "";
// 	ptr = str4;
// 	if (ft_str_is_alpha(ptr) != 1){
// 		printf("error string empty");
// 	}

// 	return (0);
// }