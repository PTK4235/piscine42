/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:21 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 12:24:21 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str);
char	charupcase(char l);
int		char_is_alpha(char c);

int	char_is_alpha(char c)
{
	if (!((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
	{
		return (0);
	}
	return (1);
}

int	char_is_numeric(char c)
{
	if (!(c >= 48 && c <= 57))
	{
		return (0);
	}
	return (1);
}

char	charupcase(char l)
{
	if (l >= 97 && l <= 122)
	{
		l = l - 32;
	}
	return (l);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	if (str[0] == '\0')
	{
		return (str);
	}
	if (char_is_alpha(str[0]))
	{
		str[0] = charupcase(str[0]);
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (!char_is_alpha(str[i - 1]) && char_is_alpha(str[i]))
		{
			if (!char_is_numeric(str[i - 1]))
			{
				str[i] = charupcase(str[i]);
			}
		}
		i++;
	}
	return (str);
}

/*
int	main(int argc, char **argv)
{

	char	*ptr;
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	
	ptr = str;
	printf("%s",ft_strcapitalize(ptr));
	return (0);
}*/