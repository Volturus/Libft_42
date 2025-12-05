/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:26:45 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/24 17:31:27 by vmourey          ###   ########.fr       */
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*retour;
	int		i;

	if (!s || !f)
		return (0);
	retour = (char *) malloc (sizeof(char) * length(s) + 1);
	if (!retour)
		return (NULL);
	i = 0;
	while (i < length(s))
	{
		retour[i] = f(i, s[i]);
		i++;
	}
	retour[i] = '\0';
	return (retour);
}

/* #include <stdio.h>

char f(unsigned int i, char c)
{
	char str;
	str = c + i;
	return (str);
}

int main()
{
	char *str1 = "adiuaifao";
	printf("%s", ft_strmapi(str1, f));
}
 */