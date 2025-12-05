/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:51:56 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 18:38:26 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*retour;

	i = 0;
	retour = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			retour = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (retour);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

    const char * source = "The C Language";
    char * destination;
    char * pointer;
    int length = strlen( source );
    
    // We clone the inital string 
    destination = (char *) malloc( sizeof( char) * (length+1) );
    strcpy( destination, source );
        
    // We replace the last 'a' character
    pointer = ft_strrchr( destination, 'a' );
    *pointer = 'A';
    
    // Display result : The C LAnguage 
    printf( "Result : %s\n", destination );
        
    // Release dynamicly allocated memory 
    free( destination );
    
    return 0;
} */
