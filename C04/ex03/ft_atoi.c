/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:25:14 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/24 19:21:59 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	convert(const char *str, int i, int nb)
{
	nb *= 10;
	nb += str[i] - '0';
	return (nb);
}

int	white_space(const char *str, int *ii)
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

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	nb;

	i = 0;
	count = 0;
	nb = 0;
	count = white_space(str, &i);
	while (48 <= str[i] && str[i] <= 57)
	{
		nb = convert(str, i, nb);
		i++;
	}
	if (count % 2 == 1)
		nb *= -1;
	return (nb);
}

//int main(void)
//{
//	char *s = "  \r \t \f \n \v ---++-+-+---51651156ab567";
//	printf("%d", ft_atoi(s));
//	return (0);
//}
