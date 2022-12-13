/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:34:42 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/18 13:35:15 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		if (65 <= str[i] && str[i] <= 90)
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
		i++;
	}
	return (result);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_uppercase(&str[i]) == 1)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char	str[] = "KNEerfegrORN7758KOSD88";
	char	str1[] = "EKGNEOBEGERQ";
	char	strv[] = "GG";
	printf("%s \n", ft_strlowcase(str));
	printf("%s \n", ft_strlowcase(str1));
	printf("%s", ft_strlowcase(strv));
	return (0);
}*/
