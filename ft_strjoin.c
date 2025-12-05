/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:53:51 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/25 14:38:05 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	length(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*retour;
	int		i;
	int		l;

	if (s1 == NULL || s2 == NULL)
		return (0);
	l = length(s1) + length(s2);
	i = 0;
	retour = (char *) malloc (sizeof(char) * (l + 1));
	if (!retour)
		return (NULL);
	if (l == 0)
	{
		retour[0] = 0;
	}
	while (i < l)
	{
		if (i < length(s1))
			retour[i] = s1[i];
		else
			retour[i] = s2[i - length(s1)];
		i++;
	}
	retour[i] = '\0';
	return (retour);
}

/* #include <stdio.h>

int main()
{
	char *str1 = "aojdp";
	char *str2 = " oadjh";
	printf("%s/n", ft_strjoin(str2,str1));
} */
