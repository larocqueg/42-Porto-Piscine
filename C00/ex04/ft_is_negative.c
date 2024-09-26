/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:41:20 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/05 12:41:22 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
		return ;
	}
	else
		write(1, "N", 1);
}
/*
int	main(void)
{
	int i = 10;
	int j = -10;

	ft_is_negative(i);
	write(1, "\n", 1);
	ft_is_negative(j);
	write(1, "\n", 1);
	return (0);
}
*/
