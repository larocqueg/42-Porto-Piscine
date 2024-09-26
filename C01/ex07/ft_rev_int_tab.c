/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:13:36 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/21 16:19:42 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		ri;
	int		swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7};
	int size = sizeof(tab) / sizeof(tab[0]);

	printf("Original array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_rev_int_tab(tab, size);

	printf("Reversed array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return 0;
}
*/
