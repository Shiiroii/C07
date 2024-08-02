/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:20:35 by liulm             #+#    #+#             */
/*   Updated: 2024/08/02 11:47:58 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*array;

	i = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(range * sizeof(int));
	if (!array)
		return (NULL);
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

// -----------------------------------------------

#include <stdio.h>

int	main(void)
{
	int	*array;
	int	i;

	i = 0;
	array = ft_range(1, 10);
	while (i < 10)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free (array);
	return (0);
}
