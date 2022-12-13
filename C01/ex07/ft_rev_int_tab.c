/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:33:35 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/15 20:11:06 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	stock;
	int	i;
	int	alph;

	alph = size / 2;
	size--;
	i = 0;
	while (i < alph)
	{
		stock = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = stock;
		i++;
	}
}
