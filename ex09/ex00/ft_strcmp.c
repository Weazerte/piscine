/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:49:19 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/19 19:52:04 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_res(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	res;

	if (ft_strlen(s1) > ft_strlen(s2))
	{
		res = ft_res(s1, s2);
	}
	else
	{
		res = ft_res(s2, s1);
		res = res * (-1);
	}
	return (res);
}

/*int	main()
{
	printf("%d", ft_strcmp("Hello ", "Hello "));
	return 0;
}*/
