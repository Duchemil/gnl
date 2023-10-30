/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:23:50 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/30 17:24:10 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strchr(char *s, int c, int flag)
{
	int	i;

	i = 0;
	if (flag == 1 && !s)
		return (-5);
	while (s[i] && s)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
char	*ft_strndup(const char *src, int n)
{
	int			j;
	char		*dest;

	j = 0;
	dest = (char *)malloc(sizeof(*dest) * (n + 1));
	if (dest == NULL)
		return (0);
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
