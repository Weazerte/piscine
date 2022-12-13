/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:22:49 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/01 17:04:16 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range_l;
	int	*tabtab;
	int	i;

	range_l = max - min;
	if (range_l <= 0)
	{
		*range = 0;
		return (0);
	}
	tabtab = malloc(range_l * sizeof(int) + 1);
	if (!tabtab)
	{
		*range = 0;
		return (-1);
	}
	*range = tabtab;
	i = 0;
	while (i < range_l)
	{
		tabtab[i] = min + i;
		i++;
	}
	return (range_l);
}

// int	main(void)
// {
// 	int *range;
// 	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
// 	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
// 	printf("-1, 0 : %d, %d", range[0], range[1]);
// }
