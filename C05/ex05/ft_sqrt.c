/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:04:34 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/15 13:08:48 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
int	main(int ac, char *av[])
{
	int n = atoi(av[1]);
	int nsqrt = ft_sqrt(n);
	if (ac == 2)
	{
		printf("squereroot of %i is: %i\n", n, nsqrt);
		return (0);
	}
	else
		return (1);
}
*/
