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
	return (0);
}

void	ft_sendmessage(int pid, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_transmit(pid, str[i++]);
}

void	ft_transmit(int pid, char c)
{
	char *str;
	int	i;

	i = 0;
	str = ft_char_to_bin(c);
	ft_printf("str = %s\n", str);
	while (str[i])
	{
		if (str[i] == '0')
		{
			kill(pid, SIGUSR1);
			ft_printf("USR1 sent\n");
		}
		else if (str[i] == '1')
		{
			kill(pid, SIGUSR2);
			ft_printf("USR2 sent\n");
		}
		ft_printf("str[%d] = %c\n", i, str[i]);
		i++;
		sleep(1);
	}
	free (str);
}

char	*ft_char_to_bin(char c)
{
	char *str;
	int i;

	i = 7;
	str = (char *)malloc(sizeof(char) * 9);
	if (!str)
		return (NULL);
	while (i >= 0)
	{
		str[7 - i] = (c & (1 << i)) ? '1' : '0';
		i--;
	}
	str[8] = '\0';
	return (str);
}
