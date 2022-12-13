/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:54:36 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/15 17:33:53 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stockptr;

	stockptr = *a;
	*a = *a / *b;
	*b = stockptr % *b;
}

/*void main(void)
{
	int a;
	int b;
	int *prt;
	int *prt0;

	a = 2;
	b = 2;
	prt = &a ;
	prt0 = &b;
	ft_ultimate_div_mod(prt, prt0);
	printf("%d\n%d\n", *prt, *prt0);
}*/
