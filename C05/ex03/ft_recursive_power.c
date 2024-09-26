/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:47:30 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/15 13:01:15 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(int ac, char *av[])
{
	int n = atoi(av[1]);
	int p = atoi(av[2]);
	if (ac == 3)
	{
		int np = ft_recursive_power(n, p);
		printf("%i powered by %i = %i\n", n, p, np);
		return (0);
	}
	else
		return (1);

}
*/
