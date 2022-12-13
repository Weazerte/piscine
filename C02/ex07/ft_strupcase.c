/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:58:44 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/17 14:58:47 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		if (97 <= str[i] && str[i] <= 122)
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

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_lowercase(&str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char	str[] = "sf56nebioneverver";
	char	str1[] = "sgvFGibwbbnio";
	char	strv[] = "dd";
	printf("%s \n", ft_strupcase(str));
	printf("%s \n", ft_strupcase(str1));
	printf("%s", ft_strupcase(strv));
	return (0);
}*/
