/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptran <ptran@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:23:41 by ptran             #+#    #+#             */
/*   Updated: 2026/02/10 15:27:56 by ptran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(int argc, char **argv)
{
	char	*dest;
	char	*src;
	char	str1[3];
	char	str2[] = "12";

	dest = str1;
	src = str2;

	printf("%s \n", strcpy(dest, src));
	printf("%s", ft_strcpy(dest, src));

	if (strcpy(dest, src) != ft_strcpy(dest, src))
		printf("error not equal");

	return (0);
}*/
