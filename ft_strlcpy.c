/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:55:11 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/25 14:46:47 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	l = ft_strlen(src);
	if (size == 0)
		return (l);
	i = 0;
	while (i < l && i + 1 < size && size != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}

/* #include <stdio.h>
#include <bsd/string.h>

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string,size);

    printf("Original function copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

void test2(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Own function copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(-1);
    test(0);

	test2(19);
    test2(10);
    test2(-1);
    test2(0);

    return(0);
} */

/* #include <stdio.h>

int main()
{
    char *src = "coucou";
    char *dst = "AAAAAAAAAAAAA";
    printf("%zu", ft_strlcpy(dst, src, 0));
    printf("%s", dst);
} */