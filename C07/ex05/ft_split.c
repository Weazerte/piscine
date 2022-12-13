/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:47:02 by eaubry            #+#    #+#             */
/*   Updated: 2022/09/30 10:49:10 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	ft_strstr(char str, char *to_find)
{
	int	j;

	j = 0;
	while (to_find[j] != '\0')
	{
		if (str == to_find[j] || str == '\0')
			return (1);
		j++;
	}
	return (0);
}

int	ft_len(char *str, char *sep, int i)
{
	int	j;

	while (str[i] != '\0' && ft_strstr(str[i], sep) == 1)
		i++;
	j = i;
	while (str[i] != '\0' && ft_strstr(str[i], sep) == 0)
		i++;
	return (i - j);
}

int	ft_display(char **tab, char *str, char *sep, int y)
{
	int	j;
	int	i;
	int	wsize;

	i = 0;
	wsize = ft_len(str, sep, i);
	tab[y] = malloc((wsize + 1) * sizeof(char));
	if (tab == NULL)
		return (0);
	j = 0;
	while (str[i] != '\0' && ft_strstr(str[i], sep) == 1)
		i++;
	while (j < wsize && str[i] != '\0')
	{
		tab[y][j] = str[i];
		j++;
		i++;
	}
	i++;
	tab[y][j] = '\0';
	return (i);
}

int	ft_word(char *str, char *charset)
{
	int	i;
	int	hword;

	i = 0;
	hword = 0;
	while (str[i] != '\0')
	{
		if (ft_strstr(str[i], charset) == 0
			&& ft_strstr(str[i + 1], charset) == 1)
			hword++;
		i++;
	}
	return (hword);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		hword;
	int		y;

	i = 0;
	hword = ft_word(str, charset);
	tab = malloc((hword + 1) * sizeof(char *));
	if (tab == NULL)
		return (0);
	i = 0;
	y = 0;
	while (y < hword)
	{
		i += ft_display(tab, &str[i], charset, y);
		y++;
	}
	tab[y] = 0;
	return (tab);
}

/*int    main()
{
    int        index;
    char	**split;
    split = ft_split("je _weqwef    w fw m wm wef iw e_ qe-", "_  -");
    index = 0;
    while (split[index] != 0)
    {
        printf("%s\n", split[index]);
        index++;
    }
    return (0);
}*/
