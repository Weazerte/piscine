/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:47:07 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/17 14:47:10 by eaubry           ###   ########.fr       */
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
		while (str[i] != '\0')
		{
			if (65 <= str[i] && str[i] <= 90)
			{
				result = 1;
			}
			else
			{
				result = 0;
				break ;
			}
			i++;
		}
	}
	return (result);
}

/*int main(void)
{
	char	str[] = "SNGKENGIRNOWNOVWNBO";
	char	str1[] = "4sgvwibwbWFIOIbnio";
	char	strv[] = "DD";
	printf("%d", ft_str_is_uppercase(str));
	printf("%d", ft_str_is_uppercase(str1));
	printf("%d", ft_str_is_uppercase(strv));
	return (0);
}*/
