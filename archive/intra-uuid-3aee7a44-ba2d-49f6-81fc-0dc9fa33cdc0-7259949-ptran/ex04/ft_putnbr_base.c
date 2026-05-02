/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_number_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:51:05 by ptran             #+#    #+#             */
/*   Updated: 2026/02/14 22:51:05 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void				ft_putnbr_base(int nbr, char *base);
void				ft_putnbr_base_aux(unsigned int nbr, char *base);
int					check_base(char *str);
unsigned int		ft_strlen(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	if (check_base(base) == -1)
	{
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_aux(-nbr, base);
	}
	else
		ft_putnbr_base_aux(nbr, base);
}

void	ft_putnbr_base_aux(unsigned int nbr, char *base)
{
	char		rem;

	rem = base[nbr % ft_strlen(base)];
	if (nbr < ft_strlen(base))
	{
		write(1, &rem, 1);
		return ;
	}
	ft_putnbr_base_aux(nbr / ft_strlen(base), base);
	write(1, &rem, 1);
}

int	check_base(char *str)
{
	int		i;
	int		j;

	if (str[0] == '\0' || str[1] == '\0')
		return (-1);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~')
			|| str[i] == '-' || str[i] == '+')
			return (-1);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int		ctr;

	ctr = 0;
	while (str[ctr] != '\0')
	{
		ctr++;
	}
	return (ctr);
}
/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	ft_putnbr_base(2147483647, "0123456789");
	ft_putnbr_base(0, "0123456789");
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putnbr_base(-30, "0123456789ABCDEF");
}*/
