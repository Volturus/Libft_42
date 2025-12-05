/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:33:55 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/17 15:06:53 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	a[1];

	i = 0;
	while (s[i])
	{
		a[0] = s[i];
		write(fd, a, 1);
		i++;
	}
	write(fd, "\n", 1);
}

/* #include <fcntl.h>

int main()
{

	int fd = open("./a.txt", O_RDWR | O_CREAT, S_IRWXU);

	ft_putendl_fd("adi", fd);

	close(fd);
} */