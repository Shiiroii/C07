/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:20:35 by liulm             #+#    #+#             */
/*   Updated: 2024/08/01 17:15:32 by liulm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*array;

	i = 0;
	j = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(j * sizeof(int));
	while (i < j)
	{
		array[i] = min + i;
		i++;
	}
	array[i] = '\0';
	return (array);
}

// -----------------------------------------------

#include <stdio.h>

int	main(void)
{
	int	*array;
	int	i;

	i = 0;
	array = ft_range(5, 10);
	while (i < 6)
	{
		printf("%d\n", array[i]);
		i++;
	}
	free (array);
	return (0);
}
