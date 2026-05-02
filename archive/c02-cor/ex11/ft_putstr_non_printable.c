/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:27 by ptran             #+#    #+#             */
/*   Updated: 2026/02/12 09:52:28 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str);
int		char_is_printable(char c);
void	write_hex(int i);

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_printable(str[i]))
		{
			write(1, &(str[i]), 1);
		}
		else
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write (1, "0", 1);
			write_hex((int) str[i]);
		}
		i++;
	}
}

int	char_is_printable(char c)
{
	if (!(c >= ' ' && c <= '~'))
	{
		return (0);
	}
	return (1);
}

void	write_hex(int i)
{
	int		hex;
	char	c;

	if (i == 0)
	{
		return ;
	}
	write_hex(i / 16);

	hex = i % 16;
	c = (char) hex + 48;
	if (hex > 9)
	{
		c = (char) hex - 10 + 97;
	}
	write (1, &c, 1);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{

	char	str[] = "Hello\nHow are you?\n";

	ft_putstr_non_printable(str);
	//printf("\\r %d", "\r");


	//ft_putstr_non_printable(str2);

	

	return (0);
}*/
