/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:32:30 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/17 15:53:02 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	n;
	int	size;
	int	*dest;

	if (min >= max)
		return (NULL);
	size = (max - min);
	dest = (int *)malloc(sizeof(int) * size);
	i = 0;
	n = min;
	if (!dest)
		return (NULL);
	while (n < max)
	{
		dest[i] = n;
		n += 1;
		i++;
	}
	return (dest);
}
