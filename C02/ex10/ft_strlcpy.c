/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:13:01 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/22 15:20:29 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	char dest[sizeof(av[1])] = {0};
	if (ac == 2)
	{
		printf("%u\n", ft_strlcpy(dest, av[1], sizeof(av[1])));
		printf("%s", dest);
	}
	printf("\n");
	return (0);
}
*/
