/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:38:26 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/25 12:58:04 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *str, int size)
{
	char	*res;
	int		i;

	res = NULL;
	res = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i += 1;
	}
	res[i] = 0;
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*res;
	int			i;

	res = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strcpy(av[i], res[i].size);
		i += 1;
	}
	res[i].size = 0;
	res[i].str = NULL;
	res[i].copy = NULL;
	return (res);
}
