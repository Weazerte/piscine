/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 22:14:54 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/15 23:32:08 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}	

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	while (i <= (size - 1))
	{
		n = i + 1;
		while (n <= size)
		{
			if (tab[i] > tab[n])
			{
				ft_swap(&tab[i], &tab[n]);
			}
			n++;
		}
		i++;
	}
}
