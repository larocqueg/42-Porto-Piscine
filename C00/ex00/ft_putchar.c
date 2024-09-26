/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:35:52 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/05 12:36:02 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
/*
int	main(void)
{
	char a = 'a';
	char b = 'b';
	char c = 'c';

	ft_putchar(a);
	ft_putchar('\n');
	ft_putchar(b);
	ft_putchar('\n');
	ft_putchar(c);
	ft_putchar('\n');

	return (0);
}
*/
