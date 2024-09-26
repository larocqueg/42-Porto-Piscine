/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:14:58 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/17 17:25:53 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	size_t	i;
	size_t	size;
	char	*dest;

	size = 0;
	while (src[size] != '\0')
		size++;
	dest = (char *)malloc(sizeof(char) * size + 1);
	i = 0;
	if (dest != NULL)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
/*
int	main(int ac, char *av[])
{
	char *dup = NULL;

	if (ac == 2)
	{
		dup = ft_strdup(av[1]);
		if (dup != NULL)
		{
			printf("duplicated string is: %s", dup);
			free(dup);
		}
		else 
			printf("Memory allocation failed!");
	}
	else
			printf("Missin command line argument!");
	printf("\n");
	return (0);
}
*/
