/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoncalv <mgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 16:40:59 by mgoncalv          #+#    #+#             */
/*   Updated: 2021/12/19 17:00:58 by mgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strtargetlen(char *str, char target)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	if (target == '\0')
	{
		while (str[i])
			i++;
		return (i);
	}
	else if (target == '\n')
	{
		while (str[i])
		{
			if (str[i] == '\n')
				return (i + 1);
			i++;
		}
		return (0);
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*result;

	if (!s1 && s2[0] == '\0')
		return (NULL);
	result = malloc(sizeof(char) * (ft_strtargetlen(s1, '\0')
				+ ft_strtargetlen(s2, '\0') + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i])
		result[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0' && s2[j - 1] != '\n')
		result[i++] = s2[j++];
	result[i] = 0;
	free(s1);
	return (result);
}

void	ft_getbuffer(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strtargetlen(buffer, '\n');
	if (j == 0)
	{
		buffer[0] = '\0';
		return ;
	}
	while (buffer[j])
	{
		buffer[i] = buffer[j];
		i++;
		j++;
	}
	buffer[i] = '\0';
}
