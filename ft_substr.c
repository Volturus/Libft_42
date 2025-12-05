/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:26:23 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/25 14:13:32 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*retour;
	size_t	i;

	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (!s)
		return (NULL);
	retour = (char *) malloc (sizeof(char) * len + 1);
	if (!retour)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		retour[i] = s[start + i];
		i++;
	}
	retour[i] = '\0';
	return (retour);
}

/* #include <stdio.h>

int main()
{
	// char *str = "alphabet";
	printf("%s\n", ft_substr("0123456789",9,10));
} */