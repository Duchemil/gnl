/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:23:50 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/30 16:47:10 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c, int flag)
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
