/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:50:37 by liulm             #+#    #+#             */
/*   Updated: 2024/08/02 12:57:20 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	calc;
	int	*res;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	calc = max - min;
	res = (int *)malloc(calc * sizeof(int));
	if (!range)
	{
		*range = NULL;
		return (-1);
	}
	while (i < calc)
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (calc);
}

// -----------------------------------------------

#include <stdio.h>

int main(void)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&tab, 1, 15);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
