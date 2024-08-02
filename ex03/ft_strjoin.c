/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:02:22 by lionelulm         #+#    #+#             */
/*   Updated: 2024/08/03 00:52:19 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	totallen(int size, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		i++;
	}
	j = j + (size - 1) * ft_strlen(sep) + 1;
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;

	i = 0;
	if (size == 0)
	{
		result = malloc(sizeof(char));
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = malloc (sizeof(char) * totallen(size, strs, sep));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

// --------------------------------------

#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Salut", "c'est", "moi."};
	char	*sep = " ";
	char	*result;
	int		size;

	size = 3;
	result = ft_strjoin(size, strs, sep);
	printf("strjoin : %s\n", result);
	return (0);
}
