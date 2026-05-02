/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_dict.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourbai <mpourbai@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 07:47:38 by ptran             #+#    #+#             */
/*   Updated: 2026/02/22 15:01:07 by mpourbai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_DICT_H
# define STRUCT_DICT_H

typedef struct dictionary
{
	int		size;
	char	**keys;
	char	**values;
}	t_dict;

t_dict	*create_struct(char *buf);
int		count_lines(char *buf);
int		get_nb(char *str, char **keys, char **values);
int		get_index(t_dict *dict, char *key);
char	*get(t_dict *dict, char *key);
void	print_dict(t_dict *dict); // 

#endif