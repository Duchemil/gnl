/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduchemi <lduchemi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:38:27 by lduchemi          #+#    #+#             */
/*   Updated: 2023/11/07 18:47:42 by lduchemi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

// void	ft_putendl(char *s)
// {
// 	if (s != NULL)
// 	{
// 		write(1, s, ft_strlen(s, 0));
// 		write(1, "\n", 1);
// 	}
// }

// int	main(int ac, char **av)
// {
// 	int		fd;
// 	char	*line;

// 	line = NULL;
// 	fd = open(av[ac - 1], O_RDONLY);
// 	get_next_line(fd);
// 	get_next_line(fd);
// 	close(fd);
// }

void	buff_erase(char *buff)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buff[i] != '\n')
		i++;
	i++;
	while (j < ft_strlen(buff, 0) - i)
	{
		buff[j] = buff[i + j];
		j++;
	}
	buff[j] = '\0';
}

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	int			byte;
	char		*dest;

	dest = NULL;
	byte = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 10240)
		return (NULL);
	if (ft_strchr(buff) == 1)
	{
		buff_erase(buff);
		dest = ft_strjoin(dest, buff);
	}
	while (byte > 0 && ft_strchr(dest) == 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		if (byte <= 0)
			return (dest);
		buff[byte] = '\0';
		dest = ft_strjoin(dest, buff);
	}
	return (dest);
}

// char	*get_next_line(int fd)
// {
// 	static char	buff[BUFFER_SIZE + 1] = "";
// 	int			byte;
// 	char		*dest;

// 	dest = NULL;
// 	if (fd < 0 || BUFFER_SIZE <= 0 || fd >  10240)
// 		return (NULL);
// 	// if (dans buff si il y a une ligne )
// 		//cut l'ancienne ligne
// 		//ajouter le rest a dest (attention on s'arrete la new ligne)
// 	//boucle de read  si dans ce que tu a lue  tu trouve pas la ligne
// 	// elle vas tout stocker dans dest quand il y a pas de ligne
// 		byte = read(fd, buff, BUFFER_SIZE);
// 		buff[byte] = '\0';
// 	//}
// }
