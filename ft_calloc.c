/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:10:12 by vmourey           #+#    #+#             */
/*   Updated: 2025/12/01 14:14:39 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	unsigned char	*array;
	size_t			i;

	i = 0;
	if ((elementCount > 2147483647 && elementSize != 0) || (\
elementSize > 2147483647 && elementCount != 0))
		return (NULL);
	if (elementCount * elementSize > 2147483647)
		return (NULL);
	array = malloc (elementCount * elementSize);
	if (!array)
		return (malloc(0));
	while (i < elementCount * elementSize)
	{
		array[i] = '\0';
		i++;
	}
	return (array);
}

// #include <stdio.h>
// #include <stdint.h>
// #include <limits.h>

// int main()
// {
// 	printf("%lu\n", (size_t)INT_MAX);
// 	printf("%lu\n", (size_t)INT_MIN);
// 	printf("%lu\n", SIZE_MAX*SIZE_MAX);
// 	printf("%lu\n", SIZE_MAX);
// 	printf("%lu", (size_t)(-5));
// }