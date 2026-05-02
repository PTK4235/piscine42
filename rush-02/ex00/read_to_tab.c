/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_to_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourbai <mpourbai@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:04:43 by mpourbai          #+#    #+#             */
/*   Updated: 2026/02/22 21:00:19 by smiuccio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/all_header.h"

char	*read_to_tab(char *buf, char *filename)
{
	int		fd;
	int		sz;

	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		write(1, "Dict Error!\n", 12);
	}
	buf = malloc(sizeof(char) * 1700);
	sz = read(fd, buf, 700);
	buf[sz] = '\0';
	return (buf);
}
