/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 10:22:49 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/06 15:51:44 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
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
}

/* #include <fcntl.h>

int main()
{

	int fd = open("./a.txt", O_RDWR | O_CREAT, S_IRWXU);

	ft_putstr_fd("adi", fd);

	close(fd);
}  */