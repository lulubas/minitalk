/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:57:34 by lbastien          #+#    #+#             */
/*   Updated: 2023/06/12 10:57:36 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
#include<signal.h>
#include<unistd.h>

//Project functions
void	signal_handler(int signnum);

//Libft functions
int		ft_printf(const char *str, ...);
int		ft_strtoint(char *str);

#endif
