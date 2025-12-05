/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:59:09 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 13:41:02 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static void	replace(unsigned char *p, unsigned char *q, int n, int i)
{
	while (i < n)
	{
		*p = *q;
		p++;
		q++;
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;

	if (!src)
		return (NULL);
	i = 0;
	p = dest;
	if (dest == 0 && src == 0)
		return (0);
	if ((size_t)(dest - src) < n)
	{
		p = p + n - 1;
		src = src + n - 1;
		while (i < n)
		{
			*p = *(unsigned char *)src;
			p--;
			src--;
			i++;
		}
	}
	else
		replace(p, (unsigned char *)src, n, i);
	return (dest);
}

/* #include <string.h>
#include <stdio.h>
 
#define SIZE    21
 
char target[SIZE] = "a shiny white sphere";
 
int main( void )
{
  char * p = target + 8;  // p points at the starting character
                          // of white
  char * source = target + 2; // start of "shiny" 
 
  printf( "Before memmove, target is \"%s\"\n", target );
  printf("%s\n", (char*)ft_memmove( p, source, 5 ));
  printf( "After memmove, target becomes \"%s\"\n", target );
} */
