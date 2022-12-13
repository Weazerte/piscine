/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 02:33:11 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/25 12:55:53 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	mult;

	mult = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (mult * ft_recursive_power(nb, power - 1));
}

// int main(void)
// {
//     int i;
//     int pow;

//     i = 2;
//     pow = 10;
//     printf("%d", ft_recursive_power(i, pow));
//     return (0);
// }
