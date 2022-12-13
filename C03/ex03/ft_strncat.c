/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:14:16 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/19 19:16:41 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_len = strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*int	main()
{
	char src[] = "Paris 17";
	char dest[] = "2022 ";
	char src1[] = "Paris 17";
	char dest1[] = "2022 ";
	printf("%s\n", ft_strncat(dest, src, 8));
	printf("%s", strncat(dest1, src1, 8));
}*/
