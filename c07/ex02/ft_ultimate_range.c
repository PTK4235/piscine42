/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:50:46 by ptran             #+#    #+#             */
/*   Updated: 2026/02/26 13:43:54 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

int		ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)

{
	int				i;
	long long		size;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	if (size < 0)
		size = -size;
	if (size > INT_MAX)
		return (-1);
	*range = malloc(sizeof (int) * size);
	if (*range == NULL)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return ((int)size);
}

/*
#include <stdio.h>
int main (void)
{
	int *range;

	int test = ft_ultimate_range(&range,-10,-3);
	for (int i = 0; i < 7; i++)
	{
		printf("%d\n", range[i]);
	}
	printf("test %d\n", test);
	
	return (1);
}*/
