/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbastien <lbastien@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:56:21 by lbastien          #+#    #+#             */
/*   Updated: 2023/06/12 10:56:25 by lbastien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/minitalk.h"

int main(void)
{
	int pid;
	struct sigaction sa;
	sa.sa_handler = signal_handler;
	sa.sa_flags = SA_RESTART;
	sigemptyset(&sa.sa_mask);
	pid = getpid();
	ft_printf("%d\n", pid);
	sigaction(SIGINT, &sa, NULL);
	
	while(1)
		pause();
	return (0);
}

void	signal_handler(int signnum)
{
	ft_printf("Signal = %d\n", signnum);	
}