/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 14:26:30 by lbastien          #+#    #+#             */
/*   Updated: 2022/10/18 19:09:38 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*tmp;
	int		i;
	size_t	n;

	i = 0;
	tmp = (char *)s;
	n = (unsigned int)ft_strlen(s);
	if (start >= n)
		return (ft_strdup(""));
	if (n - start >= len)
		sub = (char *)malloc(sizeof(char) * (len + 1));
	else
		sub = (char *)malloc(sizeof(char) * (n - start + 1));
	if (!sub)
		return (0);
	while (start-- > 0)
		tmp++;
	while (len-- && *tmp)
		sub[i++] = *tmp++;
	sub[i] = 0;
	return (sub);
}
