/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:55:52 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/12 15:30:46 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_dst;
	size_t	l_src;

	i = 0;
	l_dst = 0;
	l_src = 0;
	while (dst[l_dst] != '\0')
		l_dst = l_dst + 1;
	while (src[l_src] != '\0')
		l_src = l_src + 1;
	while (i + l_dst + 1 < size && i < l_src)
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = '\0';
	if (size <= l_dst)
		return (l_src + size);
	else
		return (l_src + l_dst);
}

/* #include <stdio.h>
#include <bsd/string.h>

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
	int r2;
    int size = 15;
    char buffer[size];
	char buffer2[size];

    strcpy(buffer,first);
    r = strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

	strcpy(buffer2,first);
    r2 = ft_strlcat(buffer2,last,size);

	printf("\n\n");
	
    puts(buffer2);
    printf("Value returned: %d\n",r2);
    if( r2 > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
} */
