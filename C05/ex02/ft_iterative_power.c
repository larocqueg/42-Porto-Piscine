/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:38:27 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/15 12:46:02 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(int ac, char *av[])
{
	int n = atoi(av[1]);
	int p = atoi(av[2]);
	if (ac == 3)
	{
		int np = ft_iterative_power(n, p);
		printf("%i powered by %i = %i\n", n, p, np);
		return (0);
	}
	else
		return (1);

}
*/
