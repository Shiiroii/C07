/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:50:37 by liulm             #+#    #+#             */
/*   Updated: 2024/08/02 11:54:42 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int));
	if (!array)
		return (-1);
	while (i < max - min)
	{
		*range[i] = min + i;
		i++;
	}
	return (range);
}

// -----------------------------------------------

#include <stdio.h>

int	main(void)
{
	int	*array;
	int	i;

	i = 0;
	array = ft_ultimate_range(1, 10);
	while (i < 10)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free (array);
	return (0);
}
