/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourbai <mpourbai@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 08:04:40 by ptran             #+#    #+#             */
/*   Updated: 2026/02/22 20:47:44 by smiuccio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>

int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str);

#endif
