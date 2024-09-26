/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:51:38 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/12 14:58:20 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	long	nbc;

	nbc = nb;
	if (nbc < 0)
	{
		ft_putchar('-');
		nbc = -nbc;
	}
	if (nbc > 9)
		ft_putnbr(nbc / 10);
	ft_putchar((nbc % 10) + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	int i = -2147483648;
	ft_putnbr(i);
	return (0);
}
*/
