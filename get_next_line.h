/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apechkov <apechkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:21:41 by apechkov          #+#    #+#             */
/*   Updated: 2025/06/19 21:27:12 by apechkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

char	*get_next_line(int fd);
char	*read_and_join(int fd, char *str);
void	clean(char **str);
//char	*ft_strdup(char *src);
//void	*ft_calloc(size_t num, size_t size);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_get_line(char **full_str);
//char	*ft_strjoin(char *s1, char *s2);
//char	*ft_strchr(char *s, char c);
//size_t	ft_strlen(char *s);
char	*ft_strchr_gnl(char *s, char c);
#endif