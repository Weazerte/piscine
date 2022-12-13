/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 12:58:35 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/27 19:59:26 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recurcive_fibonacci(int nb, int nbm, int index)
{
	int	somme;

	somme = nb + nbm;
	if (index > 0)
		return (ft_recurcive_fibonacci(somme, nb, index - 1));
	return (nb);
}

int	ft_fibonacci(int index)
{
	int	nb;

	nb = 1;
	if (index == 0)
	{
		return (0);
	}
	if (index < 0)
		return (-1);
	else
	{
		nb = ft_recurcive_fibonacci (nb, nb, index - 2);
	}
	return (nb);
}
