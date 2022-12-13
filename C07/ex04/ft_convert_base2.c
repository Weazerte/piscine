/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:40:27 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/01 17:46:52 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int			ft_strstr(char *str, char to_find);

int			white_space(char *str, int *ii);

long int	convert(char str, char *base_from, long int nb, int pow);

long int	atoi_base(char *nbr, char *base_from);

int	ft_conditions(char *base, int size_base)
{
	int	i;
	int	tmp;

	i = 0;
	if (size_base < 2)
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

int	find_j(long int nb, int *j, int size_base)
{
	int	jj;

	jj = *j;
	while (nb > 9)
	{
		nb = nb / size_base;
		jj++;
	}
	*j = jj;
	return (nb);
}

void	ft_convert(long int nbr, int size_base, char *base, char *str)
{
	long int	tnb;
	int			i;
	int			j;

	j = 0;
	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = 45;
		i++;
		j = 1;
	}
	tnb = nbr;
	tnb = find_j(tnb, &j, size_base);
	str[i] = base[tnb];
	while (j >= 1)
	{
		str[j] = base[nbr % size_base];
		nbr = nbr / size_base;
		j--;
	}
}

char	*ft_itoa_base(long int nbr, char *base)
{
	int			size_base;
	int			size_maloc;
	int			tmp;
	char		*str;

	size_base = 0;
	while (base[size_base])
		size_base++;
	size_maloc = 0;
	tmp = nbr;
	while (tmp > 0)
	{
		tmp = tmp / size_base;
		size_maloc++;
	}
	str = (char *)malloc((1 + size_maloc) * sizeof(char));
	if (str != NULL)
	{
		if (ft_conditions(base, size_base) == 1)
		{
			ft_convert(nbr, size_base, base, str);
		}
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nbfinal;
	char		*str;

	nbfinal = atoi_base(nbr, base_from);
	str = ft_itoa_base(nbfinal, base_to);
	return (str);
}
