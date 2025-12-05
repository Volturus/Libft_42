/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:56:46 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 18:38:05 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}

/*#include <stdio.h>
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
        
    // We replace the first 'a' character
    pointer = ft_strchr( destination, 'a' );
    *pointer = 'A';
    
    // Display result : The C LAnguage 
    printf( "Result : %s\n", destination );
        
    // Release dynamicly allocated memory 
    free( destination );
    
    return 0;
}
 */