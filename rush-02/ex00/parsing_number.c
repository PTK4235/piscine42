/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourbai <mpourbai@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:48:14 by mpourbai          #+#    #+#             */
/*   Updated: 2026/02/22 21:22:22 by smiuccio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/all_header.h"

char	**parsing_number(char *nbr, char **nbrs)
{
	int	len;
	int	countfirst;
	int	i;
	int	j;
	int	c;
	int	ceil;

	len = ft_strlen(nbr);
	ceil = (len + 3 - 1) / 3;
	nbrs = malloc(sizeof (char *) * (ceil));
	if (!nbrs)
		printf("error malloc 1\n");
	i = 0;
	while (i < (ceil))
	{
		if (len % 3 != 0 && i == 0)
		{
			nbrs[i] = malloc(sizeof(char) * (len % 3) + 1);
			if (!nbrs[i])
				printf("error malloc 2\n");
		}
		else
		{
			nbrs[i] = malloc(sizeof(char) * 3 + 1);
			if (!nbrs[i])
				printf("error malloc 3\n");
		}
		i++;
	}
	countfirst = len % 3;
	i = 0;
	c = 0;
	while (i < (ceil))
	{
		j = 0;
		if (countfirst > 0 && countfirst < 3)
		{
			while (i == 0 && j < countfirst) 
			{
				nbrs[i][j] = nbr[c];
				c++;
				j++;
			}
		}
		else if (countfirst == 0)
		{
			while (j < 3)
			{
				nbrs[i][j] = nbr[c];
				c++;
				j++;
			}
		}
		nbrs[i][j] = '\0';
		countfirst = 0;
		i++;
	}
	return (nbrs);
}
