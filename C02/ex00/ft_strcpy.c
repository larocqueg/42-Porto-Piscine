/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:18:28 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/09 16:03:17 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

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
int	main(int ac, char *av[])
{
	char	dest[sizeof(av[1])];

	if (ac >= 2)
	{
		ft_strcpy(dest, av[1]);
		printf("%s\n", dest);
		return (0);
	}
	else
		printf("Missing command line argument!\n");
	return (1);
}
*/
