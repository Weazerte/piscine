/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:55:08 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/25 16:07:44 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_conditions(char *base, int size_base)
{
	int	i;
	int	tmp;

	i = 0;
	if (size_base < 2 || size_base > 36)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		tmp = i + 1;
		while (base[tmp] != '\0')
		{
			if (base[i] == base[tmp])
				return (0);
			tmp++;
		}
		i++;
	}
	return (1);
}

void	ft_convert(int nbr, int size_base, char *base)
{
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	if (nbr >= size_base)
	{
		ft_convert(nbr / size_base, size_base, base);
		ft_putchar(base[nbr % size_base]);
	}
	else
		ft_putchar(nbr + '0');
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;

	size_base = 0;
	while (base[size_base])
		size_base++;
	if (ft_conditions(base, size_base) == 1)
		ft_convert(nbr, size_base, base);
}

int main()
{
	char	symbols[] = "01156196665156165";
	int nbr = -2147483647;
	ft_putnbr_base(nbr, symbols);
	return (0);
}
