/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:23:18 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/21 16:23:20 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		swap;
	int		i;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int tab[] = {5, 3, 4, 2, 1, 0, 6};
	int size = sizeof(tab) / sizeof(tab[0]);

	printf("Original array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	ft_sort_int_tab(tab, size);

	printf("Reversed array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");

	return 0;
}
*/
