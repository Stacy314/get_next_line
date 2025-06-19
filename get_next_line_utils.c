/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apechkov <apechkov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:21:59 by apechkov          #+#    #+#             */
/*   Updated: 2025/06/19 21:26:02 by apechkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	clean(char **p)
{
	if (p && *p)
	{
		free(*p);
		*p = NULL;
	}
}


//char	*ft_strdup(char *src)
//{
//	char	*dup;
//	size_t	len;

//	len = ft_strlen(src);
//	dup = ft_calloc(len + 1, sizeof(char));
//	ft_strncpy(dup, src, len);
//	return (dup);
//}

//size_t	ft_strlen(char *s)
//{
//	size_t	i;

//	i = 0;
//	if (!s)
//		return (0);
//	while (s[i])
//		i++;
//	return (i);
//}

//char	*ft_strchr(char *s, char c)
//{
//	int	i;

//	i = 0;
//	if (!s)
//		return (NULL);
//	if (c == '\0')
//		return (&s[ft_strlen(s)]);
//	while (s[i])
//	{
//		if (s[i] == c)
//			return (&s[i]);
//		i++;
//	}
//	return (NULL);
//}

//char	*ft_strjoin(char *s1, char *s2)
//{
//	size_t	i;
//	size_t	j;
//	char	*res;

//	if (!s1)
//		return (res = ft_strdup(s2), clean(&s2), res);
//	res = ft_calloc(((ft_strlen(s1) + ft_strlen(s2)) + 1), 1);
//	if (!res)
//		return (clean(&s1), clean(&s2), NULL);
//	i = 0;
//	while (s1[i])
//	{
//		res[i] = s1[i];
//		i++;
//	}
//	j = 0;
//	while (s2[j])
//	{
//		res[i] = s2[j];
//		i++;
//		j++;
//	}
//	return (clean(&s1), clean(&s2), res);
//}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	while (i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strchr_gnl(char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
		return (&s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}