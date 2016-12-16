/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwaegene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 13:58:44 by bwaegene          #+#    #+#             */
/*   Updated: 2016/12/16 14:33:26 by bwaegene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *result;

	if (min >= max)
		return (NULL);
	i = 0;
	result = (int*)malloc(sizeof(*result) * (max - min - 1));
	while (i < (max - min - 1))
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
