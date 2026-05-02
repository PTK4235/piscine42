/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:04:12 by ptk               #+#    #+#             */
/*   Updated: 2026/02/26 13:44:03 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*ret;
	int				i;
	long long		range;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (long long) max - (long long) min;
	if (range < 0)
		range = -range;
	ret = malloc(sizeof (int) * range);
	if (ret == NULL)
		return (ret);
	while (min < max)
		ret[i++] = min++;
	return (ret);
}
/*
#include <stdio.h>
int main (void)
{
	int* test = ft_range(-10,-3);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", test[i]);
	}
	return (1);
}*/
