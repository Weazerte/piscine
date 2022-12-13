/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:52:35 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/01 17:19:40 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;
	int	tab_l;

	i = 0;
	tab_l = max - min;
	if (tab_l <= 0)
		return (0);
	tab = (malloc((tab_l + 1) * sizeof(int)));
	if (tab != NULL)
	{
		while (i < tab_l)
		{
			tab[i] = min + i;
			i++;
		}
	}
	return (tab);
}

/*int	main(void)
{
	printf("%d", *ft_range(3,1));
	return (0);
}*/
