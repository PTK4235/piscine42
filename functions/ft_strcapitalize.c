/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:21 by ptran             #+#    #+#             */
/*   Updated: 2026/02/11 19:15:57 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strlowcase(char *str);
int		char_is_alpha(char c);
int		char_is_numeric(char c);
char	charupcase(char l);
char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	char_is_alpha(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
	{
		return (0);
	}
	return (1);
}

int	char_is_numeric(char c)
{
	if (!(c >= '0' && c <= '9'))
	{
		return (0);
	}
	return (1);
}

char	charupcase(char l)
{
	if (l >= 'a' && l <= 'z')
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
	str = ft_strlowcase(str);
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
	char	str[] = "  hi, how aRe yOu? 42words forty-two; fifty+and+one";
	ptr = str;
	printf("%s",ft_strcapitalize(ptr));
	return (0);
}*/