/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:35:38 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/17 14:35:41 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

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
		while (str[i] != '\0')
		{
			if (48 <= str[i] && str[i] <= 57)
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
	char	str[] = "4671368846186";
	char	str1[] = "4sgbni824o";
	char	strv[] = "22";
	printf("%d", ft_str_is_numeric(str));
	printf("%d", ft_str_is_numeric(str1));
	printf("%d", ft_str_is_numeric(strv));
	return (0);
}*/
