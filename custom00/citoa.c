/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   citoa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 17:42:33 by ptran             #+#    #+#             */
/*   Updated: 2026/02/06 18:03:19 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*reverse(char *str);
char	*citoa(int nbr, char *str, int base);
void	check_zero(int nbr, char *str, int i);

char	*citoa(int nbr, char *str, int base)
{
	int		i;
	int		temp;
	int		rem;

	temp = nbr;
	i = 0;
	check_zero(nbr, str, i);
	while (temp > 0)
	{
		rem = temp % base;
		if (rem > 9)
		{
			str[i++] = (char)((rem - 10) + 97);
		}
		else
		{
			str[i++] = (char)(rem + 48);
		}
		temp = temp / base;
	}
	str[i] = '\0';
	str = reverse(str);
	return (str);
}

char	*reverse(char *str)
{
	int		i;
	int		max;
	char	*temp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	while (i > 0)
	{
		printf("%c", str[i]);
		temp[max - i] = str[i - 1];
		i--;
	}
	temp[max] = '\0';
	return (temp);
}

void	check_zero(int nbr, char *str, int i)
{
	if (nbr == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
	}
}

int	main(int argc, char **argv)
{
	char	*str;

	str[0] = '1';
	str[1] = '2';
	str[2] = '3';
	str[3] = '\0';
	str = reverse(str);
	printf("%s", str);
	return (0);
}
