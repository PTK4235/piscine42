/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:24:43 by ptran             #+#    #+#             */
/*   Updated: 2026/02/26 13:56:11 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		contain(char *str, char c);
int		cws(char *str, char *charset, int mode);
void	fill(char *buf, char *str, int size, char **end);

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**ret;
	int		cw;

	cw = cws(str, charset, 0);
	if (!str || !charset)
		return (NULL);
	ret = malloc(sizeof (char *) * cw + 1);
	if (!ret)
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i])
	{
		if ((i == 0 && !contain(charset, str[i])) || (i >= 0
				&& contain(charset, str[i - 1]) && !contain(charset, str[i])))
		{
			ret[j] = malloc(sizeof (char) * cws(&str[i], charset, 1) + 1);
			if (!ret[j])
				return (NULL);
			fill(ret[j++], &str[i], cws(&str[i], charset, 1), &ret[cw]);
		}
	}
	return (ret);
}

int	contain(char *str, char c)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	cws(char *str, char *charset, int mode)
{
	int		ctr;
	int		i;

	if (mode == 1)
	{
		i = 0;
		while (str[i] && !contain(charset, str[i]))
			i++;
		return (i);
	}
	else
	{
		i = 1;
		ctr = 0;
		if (!contain(charset, str[0]))
			ctr++;
		while (str[i])
		{
			if (contain(charset, str[i - 1]) && !contain(charset, str[i]))
				ctr++;
			i++;
		}
		return (ctr);
	}
}

void	fill(char *buf, char *str, int size, char **end)
{
	int		i;

	i = -1;
	while (++i < size)
		buf[i] = str[i];
	buf[i] = '\0';
	if (*end != NULL)
		*end = NULL;
}
/*
#include <stdio.h>

int main (void)
{
	char **test = ft_split("azho asq hdao ", "a");
	for(int i = 0; i < 3; i++){
		printf("%s\n", test[i]);
	}
		//printf("%p\n", test[4]);
}
*/
