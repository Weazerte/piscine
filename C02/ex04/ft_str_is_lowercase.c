/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:44:47 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/17 14:44:50 by eaubry           ###   ########.fr       */
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
		while (str[i] != '\0')
		{
			if (97 <= str[i] && str[i] <= 122)
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
	char	str[] = "sfoinebioJCEJneverver";
	char	str1[] = "4sgvwibwbWFIOIbnio";
	char	strv[] = "dd";
	printf("%d", ft_str_is_lowercase(str));
	printf("%d", ft_str_is_lowercase(str1));
	printf("%d", ft_str_is_lowercase(strv));
	return (0);
}*/
