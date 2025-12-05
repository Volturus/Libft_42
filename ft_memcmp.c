/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:18:54 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 13:40:51 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *point1, const void *point2, size_t size)
{
	size_t	i;

	if (!point1 || !point2)
		return (0);
	i = 0;
	while (i < size)
	{
		if ((*(unsigned char *)point1 != *(unsigned char *)point2))
			return (*(unsigned char *)point1 - *(unsigned char *)point2);
		i++;
		point1++;
		point2++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>

int main( void )
{
   char first[]  = "12345678971234567890"; // 7 au lieu de 0
   char second[] = "12345678901234567890";
   int int_arr1[] = {1,2,3}; // 1 au lieu de 4
   int int_arr2[] = {1,2,3,4};
   int result;

   printf( "Compare '%.19s' to '%.19s':\n", first, second );
   result = ft_memcmp( first, second, 19 );
   printf("%d \n", result);

   printf( "Compare 'int_array1' to 'int_array2':\n");
   result = ft_memcmp( int_arr1, int_arr2, sizeof(int) * 4 );
   printf("%d \n", result);
   result = memcmp( int_arr1, int_arr2, sizeof(int) * 4 );
   printf("%d avec memcmp\n", result);
} */