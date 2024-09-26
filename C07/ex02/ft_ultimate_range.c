/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:48:59 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/17 15:53:39 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*dest;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	dest = (int *)malloc(sizeof(int) * size);
	if (!dest)
	{
		*range = NULL;
		return (-1);
	}
	*range = dest;
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
    int min = 0;
    int max = 101;
    int *range;
    int size;
    int i = 0;

    size = ft_ultimate_range(&range, min, max);

    if (size == -1)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    if (range != NULL)
    {
        while (i < size)
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
        free(range);
    }
    else
    {
        printf("Range is NULL\n");
    }

    return 0;
}
*/
