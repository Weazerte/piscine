/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:15:44 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/15 10:34:26 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}	

/*void main(void)
{
	int a;
	int b;
	int *ptr1;
	int *ptr11;

	a = 1;
	b = 2;
	ptr1 = &a;
	ptr11 = &b;
	ft_swap(ptr1, ptr11);
	printf("%d \n",*ptr1);
	printf("%d",*ptr11);

}*/
