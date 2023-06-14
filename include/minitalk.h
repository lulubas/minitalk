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
#include<stdlib.h>
#include<stdio.h>

//Project functions
void	signal_handler(int signnum);
void	ft_sendmessage(int pid, char *str);
void	ft_transmit(int pid, char c);
char	*ft_char_to_bin(char c);
void	printBinary(char c);

//Libft functions
int		ft_printf(const char *str, ...);
int		ft_strtoint(char *str);

#endif
