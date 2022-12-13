/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 22:28:55 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/19 10:33:34 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*int	main()
{
	char src[] = "sdvbhsvbhis";
	char dest[] = "World1";
	char dest1[] = "World2";

	printf("%d", ft_strlcpy(dest, src, 3));
	printf("\n%d", ft_strlcpy(dest1, src, 3));
	printf("\n%d", ft_strlcpy(dest, src, 5));
	printf("\n%s", dest);
	printf("\n%d", ft_strlcpy(dest, src, 7));
	printf("\n%d", ft_strlcpy(dest1, src, 7));
}*/
