/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourbai <mpourbai@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:46:30 by ptran             #+#    #+#             */
/*   Updated: 2026/02/22 20:57:59 by smiuccio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/all_header.h"

/*
	CUSTOM STRUCTURE DICTIONARY

	create_struct	: creat structure dictionary
	count_lines		: count lines (\n) in buffer string
	get_nb			: get number numerical and string representation
	get_index		: return index of an key
	get				: return value of an key
	
	typedef struct dictionary
	{
		int		size;
		char	**keys;
		char	**values;
	}	t_dict;

	how to use :
	#include "struct_dict.c" or compile with
	create a dictionary with create_struct and the string buffer
	if you want to acces values : use get function with the key
	
	source of inspiration :
	https://www.geeksforgeeks.org/dsa/implementation-on-map-or
	-dictionary-data-structure-in-c/
*/

t_dict	*create_struct(char *buf)
{
	t_dict		*dict;
	int			line;
	int			i;

	dict = malloc(sizeof (t_dict));
	if (dict == 0)
		return (NULL);
	dict->size = count_lines(buf);
	dict->keys = malloc(sizeof (char *) * dict->size);
	if (dict == 0)
		return (NULL);
	dict->values = malloc(sizeof (char *) * dict->size);
	if (dict == 0)
		return (NULL);
	line = 0;
	i = 0;
	while (buf[i])
	{
		if (i == 0 || (buf[i - 1] == '\n'))
		{
			get_nb(&buf[i],
				&dict->keys[line], &dict->values[line]);
			line++;
		}
		i++;
	}
	return (dict);
}

int	count_lines(char *buf)
{
	int		i;
	int		ctr;

	i = 0;
	ctr = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			ctr++;
		}
		i++;
	}
	return (ctr);
}

int	get_nb(char *str, char **keys, char **values)
{
	int				i;
	unsigned int	nb_len;
	char			*ptr;

	nb_len = 0;
	i = -1;
	ptr = &str[0];
	while (str[++i] >= '0' && str[i] <= '9')
		nb_len++;
	*keys = malloc(sizeof (char) * nb_len + 1);
	if (*keys == 0)
		return (-1);
	ft_strncpy(*keys, ptr, nb_len);
	(*keys)[nb_len] = '\0';
	while (str[i] == ' ' || str[i] == ',')
		i++;
	ptr = &str[i];
	nb_len = 0;
	while (str[i] >= ' ' && str[i] <= '~')
	{
		nb_len++;
		i++;
	}
	*values = malloc(sizeof (char) * nb_len + 1);
	if (*keys == 0)
		return (-1);
	ft_strncpy(*values, ptr, nb_len);
	(*values)[nb_len] = '\0';
	return (1);
}

int	get_index(t_dict *dict, char *key)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		if (dict->keys[i] == key)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

char	*get(t_dict *dict, char *key)
{
	int	i;

	i = get_index(dict, key);
	if (i == -1)
		return (NULL);
	return (dict->values[i]);
}

void	print_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		write(1, dict->keys[i], ft_strlen(dict->keys[i]));
		write(1, "|", 1);
		write(1, dict->values[i], ft_strlen(dict->values[i]));
		write(1, "\n", 1);
		i++;
	}
}
// TODO
// int	check_format_line()
// {
//
// }
// void free_dict(t_dict *dict)
// {
//
// }
/*
int main (void)
{
	t_dict		*dict = NULL;

	char *buf = "0 ,    zero\n1   , one\n2 ,  two\n3 ,  three\n4 ,  four\n";

	dict = create_struct(buf);
	print_dict(dict);
	return (1);
}*/
