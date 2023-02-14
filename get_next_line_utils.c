/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatas-p <jmatas-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:55:17 by jmatas-p          #+#    #+#             */
/*   Updated: 2023/01/30 16:34:46 by jmatas-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*mem;
	unsigned char	*temp;
	size_t			c;

	mem = malloc(size * count);
	if (!mem)
		return (0);
	temp = mem;
	c = 0;
	while (c++ < size * count)
		*temp++ = 0;
	return (mem);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

int	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstring;
	size_t	s1pos;
	size_t	s2pos;

	s1pos = -1;
	s2pos = -1;
	if (s1 && s2)
	{
		newstring = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (newstring == NULL)
			return (NULL);
		while (s1[++s1pos] != '\0')
		{
			newstring[s1pos] = s1[s1pos];
		}
		while (s2[++s2pos] != '\0')
		{
			newstring[s1pos + s2pos] = s2[s2pos];
		}
		newstring [s1pos + s2pos] = '\0';
		free(s1);
		return (newstring);
	}
	return (NULL);
}
