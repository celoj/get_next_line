/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcelojev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 19:48:34 by dcelojev          #+#    #+#             */
/*   Updated: 2019/05/09 22:26:00 by dcelojev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int	extend(char **bfd)
{
	char	*extended;
	int		bfd_length;

	bfd_length = !(*bfd) ? 0 : ft_strlen(*bfd);
	if (!(extended = ft_strnew(bfd_length + BUFF_SIZE)))
		return (0);
	if (bfd_length != 0)
		ft_strcpy(extended, *bfd);
	ft_memdel((void **)bfd);
	*bfd = extended;
	return (1);
}

int	grab_line(char **bfd, char **line)
{
	char	*s;
	int		line_length;

	s = 0;
	line_length = 0;
	while ((*bfd)[line_length] != '\0' && (*bfd)[line_length] != '\n')
		line_length++;
	*line = ft_strsub(*bfd, 0, line_length);
	if ((*bfd)[line_length] == '\n')
		s = ft_strsub(*bfd, line_length + 1, ft_strlen(*bfd) - line_length - 1);
	ft_memdel((void **)bfd);
	*bfd = s;
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	static char	*buffer[MAX_FILES];
	int			bytes_read;
	int			length;

	if (fd < 0 || fd >= MAX_FILES || !line || !extend(&buffer[fd]))
		return (-1);
	length = ft_strlen(buffer[fd]);
	while ((bytes_read = read(fd, &buffer[fd][length], BUFF_SIZE)) > 0)
	{
		if (ft_strchr(buffer[fd], '\n'))
			break ;
		else if (!extend(&buffer[fd]))
			return (-1);
		length += BUFF_SIZE;
	}
	if (bytes_read < 0)
		return (-1);
	else if (bytes_read == 0 && (!buffer[fd] || buffer[fd][0] == '\0'))
		return (0);
	return (grab_line(&buffer[fd], line));
}
