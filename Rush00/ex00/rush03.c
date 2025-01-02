/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjesus-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:52:55 by rjesus-d          #+#    #+#             */
/*   Updated: 2024/09/08 16:07:23 by rjesus-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_row(int current_column, int x)
{
	if (current_column == 1)
		ft_putchar('A');
	if (current_column == x && current_column != 1)
		ft_putchar('C');
	else if (current_column > 1 && current_column < x)
		ft_putchar('B');
}

void	middle_rows(int current_column, int x)
{
	if (current_column == 1)
		ft_putchar('B');
	if (current_column == x && current_column != 1)
		ft_putchar('B');
	else if (current_column > 1 && current_column < x)
		ft_putchar(' ');
}

void	last_row(int current_column, int x)
{
	if (current_column == 1)
		ft_putchar('A');
	if (current_column == x && current_column != 1)
		ft_putchar('C');
	else if (current_column > 1 && current_column < x)
		ft_putchar('B');
}

void	conditions(int current_line, int current_column, int x, int y)
{
	current_line = 1;
	while (current_line <= y)
	{
		current_column = 1;
		while (current_column <= x)
		{
			if (current_line == 1)
				first_row(current_column, x);
			if (current_line == y && current_line != 1)
				last_row(current_column, x);
			else if (current_line > 1 && current_line < y)
				middle_rows(current_column, x);
			current_column++;
		}
		ft_putchar('\n');
		current_line++;
	}
}

void	rush(int x, int y)
{
	char	*error;
	int		current_line;
	int		current_column;
	int		counter;

	counter = 0;
	error = "The number must be higher than 0!\n";
	if (x <= 0 || y <= 0)
	{
		while (error[counter] != '\0')
		{
			ft_putchar(error[counter]);
			counter++;
		}
		return ;
	}
	current_line = 1;
	current_column = 1;
	conditions(current_line, current_column, x, y);
}
