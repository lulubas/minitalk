/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:46:48 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/11 16:33:38 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*ctr;

	ctr = (void *)malloc(n * s);
	if (ctr == NULL)
		return (NULL);
	ft_bzero(ctr, n * s);
	return ((void *)ctr);
}
