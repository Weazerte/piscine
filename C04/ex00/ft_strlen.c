/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:12:46 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/20 14:16:30 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

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

/*void main(void)
{
	char	*str;
	int	i;

	str = "sndoehgdhboehbdhboehbheebhobhbheohbeho"; 
	i = ft_strlen(str);
	printf("%d",i);
}*/