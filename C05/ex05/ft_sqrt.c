/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:33:36 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/25 22:55:33 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	div;

	div = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((div * div) <= nb)
	{
		if ((div * div) == nb)
			return (div);
		div++;
	}
	return (0);
}
