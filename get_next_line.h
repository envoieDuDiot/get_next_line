/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbryon <gbryon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 16:00:16 by gbryon            #+#    #+#             */
/*   Updated: 2017/11/03 06:30:47 by gbryon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <stdio.h>
# include <unistd.h>

# define F_MAX_FD 1196434
# define BUFF_SIZE 8

int		get_next_line(int fd, char **line);

#endif
