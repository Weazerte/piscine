/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:12:52 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/26 11:52:04 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	div;
	int	i;

	i = 0;
	div = 1;
	while ((div * div) <= nb)
	{
		if ((div * div) == nb)
		{
			return (div);
		}
		i++;
		div++;
	}	
	return (div);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	i = 2;
	sqrt = ft_sqrt(nb);
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= sqrt)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
