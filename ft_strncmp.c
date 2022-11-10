/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:31:41 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/07 21:44:36 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)s1;
	d = (unsigned char *)s2;
	while (i < n  && (s[i] || d[i]))
	{
		if (s[i] != d[i])
			return (s[i] - d[i]);
		i++;
	}
	return (0);
}
