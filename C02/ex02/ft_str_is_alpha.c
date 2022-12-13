/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:35:08 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/17 12:35:10 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

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
		while (str[i] != '\0')
		{
			if ((97 <= str[i] && str[i] <= 122)
				|| (65 <= str[i] && str[i] <= 90))
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
	printf("%d \n", ft_str_is_alpha(str));
	printf("%d \n", ft_str_is_alpha(str1));
	printf("%d", ft_str_is_alpha(strv));
	return (0);
}*/
