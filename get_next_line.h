/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgoncalv <mgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 19:23:16 by mgoncalv          #+#    #+#             */
/*   Updated: 2021/12/19 16:51:08 by mgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_strtargetlen(char *str, char target);
void	ft_getbuffer(char *buffer);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
#endif