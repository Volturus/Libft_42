/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:57:20 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 13:43:20 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t			i;
	unsigned char	*p;

	if (pointer == NULL)
		return (NULL);
	i = 0;
	p = pointer;
	while (i < count)
	{
		p[i] = (unsigned char) value;
		i++;
	}
	return (pointer);
}

/* #include <stdlib.h>
#include <string.h>

int main() {

    char array [] = "012345";
    size_t size = sizeof( char ) * 4;
    int length;

    //Display the initial values 
    for( length=0; length<6; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    //Change the memory block
    ft_memset( array, '2', size );

    //Display the new values 
    for( length=0; length<6; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
} */