/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:54:40 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/12 15:34:58 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	retour;

	retour = 0;
	while (str[retour] != '\0')
		retour = retour + 1;
	return (retour);
}

/* #include <stdio.h>

int main()
{
	printf("%ld\n", ft_strlen("ask-d "));
} */