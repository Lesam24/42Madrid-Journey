/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 14:14:01 by samsanch          #+#    #+#             */
/*   Updated: 2026/06/16 14:14:02 by samsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*get_chunk(int fd, char *content)
{
	char	*buffer;
	char	*temp;
	int		bytes_read;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free(content), NULL);
	bytes_read = 1;
	while (!ft_strchr(content, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(buffer), free(content), NULL);
		buffer[bytes_read] = '\0';
		temp = content;
		content = ft_strjoin(temp, buffer);
		free(temp);
	}
	return (free(buffer), content);
}

static char	*get_line(char *content)
{
	int		i;
	char	*line;

	i = 0;
	if (!content[i])
		return (NULL);
	while (content[i] && content[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (content[i] && content[i] != '\n')
	{
		line[i] = content[i];
		i++;
	}
	if (content[i] == '\n')
	{
		line[i] = content[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*move_content(char *content)
{
	int		i;
	int		j;
	char	*new_content;

	i = 0;
	while (content[i] && content[i] != '\n')
		i++;
	if (!content[i])
	{
		free(content);
		return (NULL);
	}
	new_content = malloc((ft_strlen(content) - i + 1) * sizeof(char));
	if (!new_content)
		return (NULL);
	i++;
	j = 0;
	while (content[i])
		new_content[j++] = content[i++];
	new_content[j] = '\0';
	free(content);
	return (new_content);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*content[1024];

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= 1024)
		return (NULL);
	if (!content[fd])
	{
		content[fd] = ft_strdup("");
		if (!content[fd])
			return (NULL);
	}
	content[fd] = get_chunk(fd, content[fd]);
	if (!content[fd])
		return (NULL);
	line = get_line(content[fd]);
	content[fd] = move_content(content[fd]);
	return (line);
}
