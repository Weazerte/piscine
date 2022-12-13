/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 02:03:41 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/24 02:29:49 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	mult;

	i = 1;
	mult = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			nb = nb * mult;
			i++;
		}
	}
	return (nb);
}

// int main(void)
// {
// 	int i;
// 	int pow;

// 	i = 2;
// 	pow = 7;
// 	printf("%d", ft_iterative_power(i, pow));
// 	return (0);
// }
