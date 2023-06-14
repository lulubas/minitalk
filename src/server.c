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
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while(1)
		pause();
	return (0);
}

void	signal_handler(int sign)
{	
	static int	b_read;
	static char	c;
	printf("Sign = %d, SIGUSR1 = %d, SIGUSR2 = %d\n", sign, SIGUSR1, SIGUSR2);
	printf("Initial value: ");
	printBinary(c);
/*	if (sign == SIGUSR1)
	{
		c >>= 1;
		c &= 0x7F;
		printf("Value post_1: ");
		printBinary(c);
	}
*/
	if (sign == SIGUSR2)
	{
		c |= (1 << (7 - b_read));
		printf("Value post_2: ");
		printBinary(c);
	}
	b_read++;
	if (b_read == 8)
	{
		write(1, &c, 1);
		b_read = 0;
		c = 0;
	}
}

void printBinary(char c) {
    for (int i = 7; i >= 0; i--) {
        printf("%c", (c & (1 << i)) ? '1' : '0');
    }
    printf("\n");
}