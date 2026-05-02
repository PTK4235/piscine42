/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_str_to_tokens.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpourbai <mpourbai@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:28:18 by ptran             #+#    #+#             */
/*   Updated: 2026/02/22 20:45:16 by smiuccio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_STR_TO_TOKENS_H
# define CONVERT_STR_TO_TOKENS_H

int		get_len(char *str);
char	*get_hundred_and_more(char *str, int index, char **nbrs);
char	*get_nbr_to_str(t_dict *dict, char **nbrs, char *str);

#endif
