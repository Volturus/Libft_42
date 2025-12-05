/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:53:50 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/25 14:47:24 by vmourey          ###   ########.fr       */
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

static int	test(const char *to_find, const char *str, int i, size_t len)
{
	int		test;
	size_t	j;

	test = 0;
	j = 0;
	while (to_find[j])
	{
		if (i + j < len && to_find[j] == str[i + j])
		{
			test = test + 1;
		}
		j++;
	}
	return (test);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	char		*retour;

	if (str == NULL)
		return (NULL);
	if (length(to_find) == 0 || to_find == NULL)
	{
		return ((char *)str);
	}
	i = 0;
	retour = NULL;
	while (i < len && str[i])
	{
		if (str[i] == to_find[0])
		{
			if (test(to_find, str, i, len) == length(to_find))
			{
				retour = (char *)str + i;
				return (retour);
			}
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     // Recherche de la présence de la chaîne "admin" dans la saisie.
//     char * result = ft_strnstr( "aaadminaa", "admin", -1);

//     // Affichage d'une réponse à l'utilisateur.
//     if ( result == NULL ) {
//         puts( "Vous n'avez pas teste une chaine contenant le mot admin" );
//     } else {
//         puts( "Vous avez teste une chaine contenant le mot admin" );
//     }

//     return EXIT_SUCCESS;
// }
