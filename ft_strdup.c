/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:56:25 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/26 16:24:46 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	length(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		len;

	len = length(src);
	dest = (char *) malloc (len + 1);
	dest = ft_strcpy(dest, (char *)src);
	return (dest);
}

/* #include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main() {

    const char * original = "";

    // On duplique la chaîne de caractères initiale.
    char * copy = ft_strdup( original );

    // On affiche la chaîne finale
    printf( "%s\n", copy );

    // Sans oublier de libérer l'espace mémoire au final.
    free( copy );

    return EXIT_SUCCESS;
} */
