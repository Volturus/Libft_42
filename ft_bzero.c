/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:12:41 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 10:21:40 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *pointer, int count)
{
	int				i;
	unsigned char	*p;

	if (pointer == NULL)
		return ;
	p = pointer;
	i = 0;
	while (i < count)
	{
		*p = '\0';
		p++;
		i++;
	}
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int array[] = {1,2,3,4,5};
    size_t size = sizeof( int ) * 3;
    int length;

    //Display the initial values 
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    //Reset the memory bloc 
    ft_bzero( array, size );

    //Display the new values 
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
} */