/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:25:09 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/15 12:37:51 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(int argc, char *argv[])
{
	int n = atoi(argv[1]);

	int nb = ft_recursive_factorial(n);

	printf("The factorial of %i is: %i\n", n, nb);
}
*/
