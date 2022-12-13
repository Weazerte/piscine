/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:17:18 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/15 18:32:29 by eaubry           ###   ########.fr       */
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