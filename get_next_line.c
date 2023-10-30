/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:38:27 by lduchemi          #+#    #+#             */
/*   Updated: 2023/10/30 17:21:42 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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

char	*ft_strjoin(char *s1, char *s2, int n)
{
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	join = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!join)
		return (NULL);
	while (s1[i] && i < n)
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j] && i < n)
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*buffer;
	int			pos;
	int			bytes;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 10240)
		return (NULL);
	buffer = NULL;
	pos = ft_strchr(next_line, '\n', 1);
	while (pos == -1 && pos != -5)
	{
		buffer = ft_calloc(BUFFER_SIZE + 1, 1);
		if (!buffer)
			return (NULL);
		bytes = read(fd, buffer, BUFFER_SIZE);

	}
}

int	main(int argc, char **argv)
{
	char	*filename;

	if (argc == 1)
	{
		filename = argv[1];
		printf("Gnl : %s", get_next_line(open(filename, O_WRONLY | O_CREAT | O_TRUNC)));
	}
	return (0);
}
