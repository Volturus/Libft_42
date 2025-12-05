/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:26:37 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/28 17:38:32 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

static void	writer(char a_ecrire, int i, int nb, int fd)
{
	if (0 <= nb && nb <= 9)
	{
		a_ecrire = nb + 48;
		write(fd, &a_ecrire, 1);
	}
	else
	{
		while (a_ecrire == '0')
		{
			a_ecrire = "0123456789"[nb / i];
			if (a_ecrire != '0')
				write(fd, &a_ecrire, 1);
			i = i / 10;
		}
		while (i >= 10)
		{
			a_ecrire = "0123456789"[(nb / i) % (10)];
			write(fd, &a_ecrire, 1);
			i = i / 10;
		}
		a_ecrire = "0123456789"[nb % 10];
		write(fd, &a_ecrire, 1);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	char		a_ecrire;
	long int	i;
	char		minus;
	char		term;

	i = 1000000000;
	minus = '-';
	a_ecrire = '0';
	term = '8';
	if (nb >= 0)
		writer(a_ecrire, i, nb, fd);
	else if (nb == -2147483647 - 1)
	{
		nb = nb + 1;
		nb = -nb;
		write(fd, &minus, 1);
		writer(a_ecrire, i, nb / 10, fd);
		write(fd, &term, 1);
	}
	else
	{
		write(fd, &minus, 1);
		writer(a_ecrire, i, -nb, fd);
	}
}

/* #include <fcntl.h>

int main()
{

	int fd = open("./a.txt", O_RDWR | O_CREAT, S_IRWXU);

	ft_putnbr_fd(10, fd);

	close(fd);
} */
