/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:33:46 by gde-la-r          #+#    #+#             */
/*   Updated: 2024/09/18 11:51:16 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	if (size == 0)
		return (0);
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*result;

	result = (char *)malloc((ft_total_len(size, strs, sep)) + 1);
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		l = 0;
		while (sep[l] && i != size - 1)
			result[k++] = sep[l++];
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	char *separator = ", ";
	if (argc < 2)
	{
		printf("No strings provided.\n");
		return (1);
	}
	
	char *result = ft_strjoin(argc - 1, &argv[1], separator);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	return (0);
}*/
