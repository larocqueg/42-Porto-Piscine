/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:20:44 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/15 12:34:03 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		factorial *= nb--;
	return (factorial);
}
/*
int	main(int ac, char **av)
{
	int n = atoi(av[1]);
	if (ac == 2)
	{
		int nb = ft_iterative_factorial(n);
		printf("The factorial of %i is: %i\n", n, nb);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
*/
