/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:51:31 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/08 17:24:37 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(int ac, char *av[])
{
	int	strlen;

	strlen = 0;
	if (ac == 2)
	{
		printf("%d\n", ft_strlen(av[1]));
		return (0);
	}
	else
		return (1);
}
*/
