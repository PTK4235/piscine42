/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:24:27 by ptran             #+#    #+#             */
/*   Updated: 2026/02/11 08:27:42 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str);
int		char_is_printable(char c);
void	write_hex(int i);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_printable(str[i]))
		{
			write(1, &(str[i]), 1);
		}
		else
		{
			c = '\\';
			write(1, &c, 1);
			write_hex((int) str[i]);
		}
		i++;
	}
}

int	char_is_printable(char c)
{
	if (!(c >= 32 && c <= 127))
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
	if (i < 16)
	{
		c = '0';
		write (1, &c, 1);
	}
	hex = i % 16;
	c = (char) hex + 48;
	if (hex > 9)
	{
		c = (char) hex - 10 + 97;
	}
	write (1, &c, 1);
}

/*
int	main(int argc, char **argv)
{
	char	*ptr;
	char	str[] = "Hello\nHow are you?\n";

	ptr = str;
	//write_hex(78);
	ft_putstr_non_printable(ptr);

	char	str2[] = "\"\thello\"\n";

	ptr = str2;
	ft_putstr_non_printable(ptr);

	

	return (0);
}*/
