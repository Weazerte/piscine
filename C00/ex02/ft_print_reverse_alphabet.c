/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:24:21 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/14 14:35:26 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	x;
	int	a;

	x = 122;
	a = 97;
	while (x >= a)
	{
		write(1, &x, 1);
		x--;
	}
}