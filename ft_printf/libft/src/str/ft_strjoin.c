/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:55:40 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/18 20:50:17 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	n;
	size_t	n1;
	size_t	n2;

	n1 = ft_strlen((char *)s1);
	n2 = ft_strlen((char *)s2);
	n = n1 + n2;
	str = (char *)malloc(sizeof(char) * n + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, n1 + 1);
	ft_strlcat(str, s2, n + 1);
	return (str);
}
