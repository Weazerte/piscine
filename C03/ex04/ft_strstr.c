/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:18:43 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/27 19:56:35 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

int	ft_parcour(char *str, char *to_find, int j, int i)
{
	while (to_find[j] != '\0')
	{
		if (str[i] != to_find[j])
			break ;
		j++;
		i++;
	}
	return (j);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		j = ft_parcour(str, to_find, j, i);
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

int	main()
{
	char str[] = "wefwegwerwergvwsgvwge";
	char find[] = "sfs";
	char find1[] = "sfs";
	printf("%s", ft_strstr(str, find));
	printf("\n%s", strstr(str, find1));
	return (0);
}
