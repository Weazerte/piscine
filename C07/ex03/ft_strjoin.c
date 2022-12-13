/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:40:06 by eaubry            #+#    #+#             */
/*   Updated: 2022/10/01 23:05:58 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	display_sep(char *conc_str, char *sep, int cpt_conc)
{
	int	cpt_sep;

	cpt_sep = 0;
	while (sep[cpt_sep] != '\0')
	{
		conc_str[cpt_conc] = sep[cpt_sep];
		cpt_sep++;
		cpt_conc++;
	}
	return (cpt_conc);
}

void	ft_concatene(int size, char **strs, char *sep, char *conc_str)
{
	int	i;
	int	cpt_strs;
	int	cpt_conc;

	cpt_conc = 0;
	i = 0;
	while (i < size)
	{
		cpt_strs = 0;
		while (strs[i][cpt_strs] != '\0')
		{
			conc_str[cpt_conc] = strs[i][cpt_strs];
			cpt_conc++;
			cpt_strs++;
		}
		if (i < size - 1)
			cpt_conc = display_sep(conc_str, sep, cpt_conc);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		all_size;
	char	*conc_str;

	i = 0;
	all_size = 0;
	while (i < size)
	{
		all_size += ft_strlen(strs[i]);
		i++;
	}
	all_size = all_size + ((size - 1) * ft_strlen(sep));
	conc_str = malloc(sizeof(char) * (all_size + 1));
	if (conc_str != NULL)
		ft_concatene(size, strs, sep, conc_str);
	return (conc_str);
}
