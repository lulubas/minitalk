/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:25:32 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/17 21:28:53 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*s;

	a = c;
	s = (unsigned char *)str;
	while (*s != a && n > 1)
	{
		s++;
		n--;
	}
	if (*s != a || n == 0)
		return (0);
	return ((void *)s);
}
