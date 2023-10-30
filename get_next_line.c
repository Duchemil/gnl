/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:38:27 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/30 16:49:35 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*s;
	unsigned int	i;

	i = 0;
	s = (char *)malloc(nmemb * size);
	if (!s)
		return (NULL);
	while (i < nmemb * size)
	{
		s[i] = '\0';
		i++;
	}
	return (s);
}

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*buffer;
	int			pos;
	int			byte;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 10240)
		return (NULL);
	buffer = NULL;
	pos = ft_strchr(next_line, '\n', 1);
	while (pos == -1 && pos != -5)
	{

	}
}

int	main(int argc, char **argv)
{
	char	*filename;

	if (argc == 1)
	{
		filename = argv[1];
		printf(get_next_line(open(filename, O_WRONLY | O_CREAT | O_TRUNC)));
	}
	return (0);
}
