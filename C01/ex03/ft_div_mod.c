/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:04:50 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/08 17:18:35 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 10;
	int b = 2;
	int div;
	int mod;

	printf("%i vai ser dividido por %i\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("Div: %d, Mod: %d\n", div, mod);
}
*/
