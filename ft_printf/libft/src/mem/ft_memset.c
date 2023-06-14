/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:49:58 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 17:34:18 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ctr;

	ctr = (unsigned char *)str;
	while (n > 0)
	{
		*ctr = c;
		ctr++;
		n--;
	}
	return (str);
}
