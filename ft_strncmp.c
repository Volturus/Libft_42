/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:54:13 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 15:07:46 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *first, const char *second, size_t n)
{
	size_t	i;

	if (first == NULL)
		return (-second[0]);
	if (second == NULL)
		return (first[0]);
	i = 0;
	while (i < n && (first[i] || second[i]))
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		i++;
	}
	return (0);
}
/* 
#include <stddef.h>
#include <string.h>
#include <stdio.h>

char *string1 = NULL;
char string2[] = "The quick brown fox jumps over the lazy dog";

int main( void )
{
   int result;
   printf( "Compare strings:\n      %s\n      %s\n\n",
           string1, string2 );
   printf( "Function:   strncmp (first 10 characters only)\n" );
   result = ft_strncmp( string1, string2 , 18 );
   printf("The result is : %d", result);
} */