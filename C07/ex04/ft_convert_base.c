/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:40:11 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/28 10:26:49 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strstr(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
			return (1);
		i++;
	}
	return (0);
}

long int	convert(char str, char *base_from, long int nb, int pow)
{
	long int	j;
	long int	size_base;
	long int	base_pow;

	size_base = 0;
	while (base_from[size_base] != '\0')
		size_base++;
	base_pow = 1;
	while (pow > 0)
	{
		base_pow = base_pow * size_base;
		pow--;
	}
	j = 0;
	while (str != base_from[j])
		j++;
	nb += j * base_pow;
	return (nb);
}

int	white_space(char *str, int *ii)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count++;
		i++;
	}
	*ii = i;
	return (count);
}

long int	atoi_base(char *nbr, char *base_from)
{
	int			i;
	int			count;
	long int	nb;
	int			pow;

	i = 0;
	count = 0;
	pow = 0;
	count = white_space(nbr, &i);
	nb = i;
	while (ft_strstr(base_from, nbr[nb]) == 1)
	{
		nb++;
		pow++;
	}
	nb = 0;
	while (ft_strstr(base_from, nbr[i]) == 1)
	{
		nb = convert(nbr[i], base_from, nb, pow - 1);
		i++;
		pow--;
	}
	if (count % 2 == 1)
		nb *= -1;
	return (nb);
}
