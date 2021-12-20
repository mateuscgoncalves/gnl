/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoncalv <mgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:16:07 by mgoncalv          #+#    #+#             */
/*   Updated: 2021/12/19 16:51:06 by mgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*str;
	int			ret;

	str = NULL;
	str = ft_strjoin(str, buffer);
	ret = 1;
	while (ret && ft_strtargetlen(buffer, '\n') == 0)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret < 0)
		{
			free(str);
			return (NULL);
		}
		buffer[ret] = '\0';
		str = ft_strjoin(str, buffer);
	}
	ft_getbuffer(buffer);
	return (str);
}
