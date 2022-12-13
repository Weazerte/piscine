/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:42:41 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/20 00:19:15 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		if ((97 <= str[i] && str[i] <= 122) || (65 <= str[i] && str[i] <= 90))
			result = 1;
		else
			result = 0;
	}
	return (result);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		if (48 <= str[i] && str[i] <= 57)
			result = 1;
		else
			result = 0;
	}
	return (result);
}

int	ft_is_condition(char *str, int i)
{
	int	j;

	j = i - 1;
	if (('a' <= str[i] && str[i] <= 'z')
		&& ((ft_str_is_alpha(&str[j]) == 0)
			&& (ft_str_is_numeric(&str[j]) == 0)))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (97 <= str[0] && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (ft_is_condition(str, i) == 1)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*int	main()
{
	char str[] = " saLut, comment tu vas ? 99mots quaran";
	char str1[] = "ddddddd";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}*/
