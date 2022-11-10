/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:18:23 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/03 15:48:59 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len) 
{
	size_t	i;
	char	*p;

	i = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start) // 10 charaf = 6-5 = 1
		len = ft_strlen(s) - start;
	if (!len)
		return (ft_strdup(""));
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[start] && len > i)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
