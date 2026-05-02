/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 12:57:55 by ptran             #+#    #+#             */
/*   Updated: 2026/02/14 12:57:55 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int				ft_atoi_base(char *str, char *base);
int				check_base(char *str);
int				get_int(char *str, char *base, int neg);
unsigned int	ft_strlen_custom(char *str, char *base);
unsigned int	ft_pow(unsigned int n, unsigned int exp, unsigned int ret);

int	ft_atoi_base(char *str, char *base)
{
	int					i;
	int					neg;

	neg = 1;
	if (str[0] == '\0' || check_base(base) == -1)
		return (0);
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= (-1);
		i++;
	}
	return (get_int(&(str[i]), base, neg));
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

int	get_int(char *str, char *base, int neg)
{
	int				i;
	int				j;
	unsigned int	ret;
	unsigned int	len_base;
	unsigned int	len_str;

	ret = 0;
	i = -1;
	len_base = 0;
	while (base[len_base])
		len_base++;
	len_str = ft_strlen_custom(str, base);
	while (str[++i])
	{
		j = 0;
		while (str[i] != base[j] && base[j])
			j++;
		if (base[j] == '\0')
			return (neg * ((int)ret));
		ret += ft_pow(len_base, (len_str - (unsigned int)i - 1), 1)
			* (unsigned int)j;
	}
	return (neg * ((int)ret));
}

unsigned int	ft_strlen_custom(char *str, char *base)
{
	unsigned int		ctr;
	unsigned int		j;

	ctr = 0;
	while (str[ctr])
	{
		j = 0;
		while (str[ctr] != base[j] && base[j])
			j++;
		if (base[j] == '\0')
			return (ctr);
		ctr++;
	}
	return (ctr);
}

unsigned int	ft_pow(unsigned int n, unsigned int exp, unsigned int ret)
{
	if (exp == 0)
		return (1);
	else if (exp <= 1)
		return (ret * n);
	return (ft_pow(n, exp - 1, ret * n));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("-2147483648 base10 : %d\n", 
		ft_atoi_base("-2147483648","0123456789"));

	printf("2147483647 base10 : %d\n", ft_atoi_base("2147483647","0123456789"));
	printf("0 base10 : %d\n", ft_atoi_base("0","0123456789"));
	printf("2A = 42 base16 : %d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("101 = 5 base2 : %d\n", ft_atoi_base("101", "01"));
	printf("-1E = -30 base16 : %d\n", ft_atoi_base("-1E", "0123456789ABCDEF"));
	printf("G = 0 base16 : %d\n", ft_atoi_base("G", "0123456789ABCDEF"));
	printf("NO = 0 base10 : %d\n", ft_atoi_base("NO","0123456789"));
		printf("-21474 83648 base10 : %d\n", 
		ft_atoi_base("-21474 83648","0123456789"));
	//printf("%d", ft_pow(4, 0, 1));
}*/
