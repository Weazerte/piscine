/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 01:07:19 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/26 11:18:06 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (nb < 0)
		return (0);
	while (j <= nb)
	{
		i *= j;
		j++;
	}
	return (i);
}

// int main(void)
// {
// 	int	i;
// 	i = -1;
// 	printf("%d ", ft_iterative_factorial(i));
// 	return (0);
// }
