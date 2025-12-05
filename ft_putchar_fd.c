/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:19:04 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/17 15:09:40 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar_fd(char c, int fd)
{
	char	a[1];

	a[0] = c;
	write(fd, a, 1);
}

/* #include <fcntl.h>

int main()
{

	int fd = open("./a.txt", O_RDWR | O_CREAT, S_IRWXU);

	ft_putchar_fd('a', fd);

	close(fd);
} */