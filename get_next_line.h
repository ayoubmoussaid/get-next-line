/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoussai <amoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:02:01 by amoussai          #+#    #+#             */
/*   Updated: 2019/12/15 10:49:20 by amoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

int				get_next_line(int fd, char **line);
char			*ft_strjoin(char *s1, char *s2);
size_t			ft_strlen(const char *str);
char			*ft_substr(char *s, unsigned int start,
						size_t len);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *src);
char			*str_checker(char *str, int nm);
int				does_it_end(char *str);
char			*read_buffer(int fd, char *buffer);
char			*verify_line(char **line, char *buffer, int x);

#endif
