/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liulm <liulm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 13:59:07 by liulm             #+#    #+#             */
/*   Updated: 2024/07/30 19:04:53 by liulm            ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		i;
	int		lensrc;
	char	*dup;

	i = 0;
	lensrc = ft_strlen(src);
	dup = (char *)malloc((sizeof(char) * lensrc) + 1);
	if (dup == NULL)
	{
		return (0);
	}
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// --------------------------------------------

#include <stdio.h>

int	main(void)
{
	char	str[10] = "test test";

	printf("%s", ft_strdup(str));
	return (0);
}
