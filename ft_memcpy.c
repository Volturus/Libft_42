/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:05:48 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 18:25:05 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;

	if (!src)
		return (dest);
	p = dest;
	i = 0;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		*p = *(unsigned char *)src;
		p++;
		src++;
		i++;
	}
	return (dest);
}
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
	int * copy = NULL;
    int length = sizeof( int ) * 5;

	//Memory allocation and copy 
    copy = (int *) malloc( length );
    ft_memcpy( copy, array, length );

    //Display the copied values 
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );

    free( copy );

    return EXIT_SUCCESS;
}
 */