/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:06:46 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/25 14:33:58 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t	i;

	i = 0;
	if (!memoryBlock)
		return (NULL);
	while (i < size)
	{
		if (*(unsigned char *)memoryBlock == (unsigned char)searchedChar)
		{
			return ((unsigned char *)memoryBlock);
		}
		else
		{
			i++;
			memoryBlock++;
		}
	}
	return (0);
}

/* #include <memory.h>
#include <stdio.h>

int  ch = 'r';
char str[] =    "lazy";
char string[] = "The quick brown dog jumps over the lazy fox";
char fmt1[] =   "         1         2         3         4         5";
char fmt2[] =   "12345678901234567890123456789012345678901234567890";

int main( void )
{
   char *pdest;
   int result;
   printf( "String to be searched:\n             %s\n", string );

   printf( "Search char: %c\n", ch );
   pdest = memchr( string, ch, sizeof( string ) );
   result = (int)(pdest - string + 1);
   if ( pdest != NULL )
      printf( "Result:      %c found at position %d\n", ch, result );
   else
      printf( "Result:      %c not found\n", ch );

   pdest = ft_memchr( string, ch, sizeof( string ) );
   result = (int)(pdest - string + 1);
   if ( pdest != NULL )
      printf( "Result:      %c found at position %d\n", ch, result );
   else
      printf( "Result:      %c not found\n", ch );

	printf( "String to be searched:\n             %s\n", fmt2 );
	printf( "Search char: %c\n", ch );
   pdest = memchr( fmt2, ch, sizeof( fmt2 ) );
   result = (int)(pdest - fmt2 + 1);
   if ( pdest != NULL )
      printf( "Result:      %c found at position %d\n", ch, result );
   else
      printf( "Result:      %c not found\n", ch );

   pdest = ft_memchr( fmt2, ch, sizeof( fmt2 ) );
   result = (int)(pdest - fmt2 + 1);
   if ( pdest != NULL )
      printf( "Result:      %c found at position %d\n", ch, result );
   else
      printf( "Result:      %c not found\n", ch );
} */

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	printf("%p", (char*)(ft_memchr(s, 2+256, 3)));
// 	printf("%p", (char*)(memchr(s, 2+256, 3)));
// }