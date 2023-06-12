/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:56:11 by lbastien          #+#    #+#             */
/*   Updated: 2023/06/12 10:56:13 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/minitalk.h"

int main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
		return (0);
	pid = ft_strtoint(argv[1]);
	ft_sendmessage(pid, argv[2]);
	ft_printf("PID is %d\n", pid);
	return (0);
}

void	ft_sendmessage(int pid, char *str)
{
	int	i;

	i = 0;
	while (char[i])
	{
		
	}
}