/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_str_to_tokens.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourbai <mpourbai@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:28:18 by ptran             #+#    #+#             */
/*   Updated: 2026/02/22 19:00:24 by mpourbai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all_header.h"

int	get_len(char *str)
{
	int len;
	
	len = ft_strlen(str);
	return ((len + 3 - 1) / 3);
}

char *get_hundred_and_more(char *str, int index, char **nbrs)
{
	char *strnbr;
	char	*zeros;
	int	i;
	int	max;


	zeros = "000";
	i = get_len(str);
	max = get_len(str);
	if (i == 1 && (ft_strlen(nbrs[index]) < 3))
		return (NULL);
	while (i > 0)
	{
		if(i == max && ft_strlen(nbrs[index]) == 3)
		{
			strnbr = "100";
		}
		else if(i == max - 1)
		{
			strnbr = "1000";
		}
		else if (i <= max - 2)
		{
			ft_strcat(strnbr, zeros);
		}
		i--;
	}
	return (strnbr);
}

char	*get_nbr_to_str(t_dict *dict, char **nbrs, char *str)
{
	int	i;
	int	j;
	char	*decimal;
	char	*rep;
	char	*get_str;
	char	*get_max_str;
	
	//rep = NULL;
	rep = malloc(sizeof(char) * 40);
	if (rep == NULL)
		return (NULL);
	decimal = malloc (sizeof(char) * 2);
	i = 0;
	while (i < get_len(str))
	{
		j = 0;
		while (nbrs[i][j])
		{
			if (ft_strlen(nbrs[i]) == 3)
			{
				if (nbrs[i][j] != '0' && j == 0) // pour les centaines
				{
					ft_putstr(get(dict,&nbrs[i][j]));
					ft_putstr(get(dict,"100"));
				}
				if (j == 1) // gerer les dixaine
				{
					
				}
				
			}
			
			
			j++;
		}
		i++;
	}
	return ("");
}



// if (nbrs[i][j] != '0')
// 			{
// 				if (j == 0)
// 				{
// 					get_max_str = get_hundred_and_more(str,i,&nbrs[i]);
// 					if (get_max_str == NULL)
						
// 					get_str = get(dict, get_max_str);
// 					rep = ft_strcat(rep, get_str);
// 				}
// 				else if (j != 1)
// 				{
// 					get_str = get(dict, &nbrs[i][j]);
// 					rep = ft_strcat(rep, get_str);
// 				}
// 				else if (j == 1 && nbrs[i][j] > 2 && ft_strlen(&nbrs[i][j]) == 3)
// 				{
// 					decimal = &nbrs[i][j];
// 					ft_strcat(decimal, "0");
// 					rep = ft_strcat(rep, get(dict, decimal));
// 					rep = ft_strcat(rep, get(dict, &nbrs[i][j + 1]));
// 					return (rep);
// 				}
// 				else if (j == 1 && nbrs[i][j] < 2)
// 				{
// 					decimal = &nbrs[i][j];
// 					ft_strcat(decimal, &nbrs[i][j + 1]);
// 					rep = ft_strcat(rep, get(dict, decimal));
// 					return (rep);
// 				}
// 			}



// char *nb_to_string(t_dict *dict, char **nbrs)
// {
// 	int x;
// 	int	i;
// 	int	j;
// 	int key;
	
// 	x = count_threes(nbrs);
// 	i = 0;
// 	while (nbrs[i])
// 	{
// 		if(x < 2)
// 		{
// 			get(dict, key)
// 			j = 0;
// 			while(nbrs[i][j])
// 			{
// 				j++;
// 			}
// 		i++;
// 	}
// }