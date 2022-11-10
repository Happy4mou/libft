/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmajdoub <mmajdoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:12:02 by mmajdoub          #+#    #+#             */
/*   Updated: 2022/11/07 21:45:27 by mmajdoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s && !f)
		 return;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
void ft(unsigned int i , char *s)
{
	i =0;
	s[i] = 'h';

}
// int main()
// {
// 	char k[] = "happy";
// 	ft_striteri(k , ft);
// 	printf("%s",k);
// }