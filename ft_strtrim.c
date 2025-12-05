/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:12:13 by vmourey           #+#    #+#             */
/*   Updated: 2025/12/01 14:11:17 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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

static int	test(char c, char const *set)
{
	int	j;

	j = 0;
	while (j < length(set))
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

static void	modif_ret(int start, int end, const char *s1, char *retour)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (i <= length(s1) - end - 1 && i >= start)
		{
			retour[j] = s1[i];
			j++;
		}
		i++;
	}
	retour[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*retour;
	int		start;
	int		end;

	start = 0;
	end = 0;
	if (s1 == NULL || s1[0] == '\0')
		return (retour = ft_strdup(""));
	while (test(s1[start], set) == 1)
		start++;
	while (test(s1[length(s1) - end - 1], set) == 1)
		end++;
	if (length(s1) - start - end + 1 > 0)
	{
		retour = (char *) malloc (length(s1) - start - end + 1);
		if (!retour)
			return (NULL);
		modif_ret(start, end, s1, retour);
	}
	else
	{
		retour = (char *) malloc (1);
		retour[0] = '\0';
	}
	return (retour);
}

/* #include <stdio.h>

int main()
{
	// char *str1 = "appo aaopa11111aopdp11111apopa1o pao";
	// char *str2 = " aop";
	printf("%s \n", ft_strtrim("abcdba", "acb"));
} */