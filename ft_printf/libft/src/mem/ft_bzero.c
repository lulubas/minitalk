/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:07:35 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 16:42:50 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ctr;

	ctr = (unsigned char *) str;
	while (n > 0)
	{
		*ctr = 0;
		ctr++;
		n--;
	}
}
