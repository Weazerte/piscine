/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:53:01 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/21 15:00:48 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = ft_strlen(dest);
	src_len = ft_strlen(src);
	dest_len = j;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && i < (size - dest_len - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}

/*int main (void)
{
	char src[] = "je veux tester ca.";
    	char dest [] = "marche ";
    printf("%i \n", ft_strlcat(dest, src, 50));
    printf("%s \n", dest);
	return (0);
}*/
