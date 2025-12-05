/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:36:01 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/26 16:25:32 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_w(const char *s, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*s)
	{
		if (*s != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*s == c)
			x = 0;
		s++;
	}
	return (count);
}

static int	count_string(char const *s, char c, int j)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i + j] && s[i + j] != c)
	{
		count += 1;
		i++;
	}
	return (count);
}

static int	assign_char(char *retour, int i, char c, const char *s)
{
	int	k;

	k = 0;
	while (k < count_string(s, c, i))
	{
		retour[k] = s[i + k];
		k++;
	}
	retour[k] = 0;
	return (k);
}

char	**ft_split(char const *s, char c)
{
	char	**retour;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	retour = (char **) malloc ((count_w(s, c) + 1) * sizeof(char *));
	while (j < count_w(s, c) && s[i])
	{
		if (count_string(s, c, i) != 0)
		{
			retour[j] = (char *) malloc (count_string(s, c, i) + 1);
			k = assign_char(retour[j], i, c, s);
			i = i + k;
			j++;
		}
		i++;
	}
	retour[j] = NULL;
	return (retour);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	// char *str = " asttttttttad D   cjr;3244i   tgrd s s ";
	// // char *str = NULL;
	// // char *str = "   asttttttttad   ";
	// char c = 'x';
	char *str = strdup("--1-2--3---4----5-----42");
	char **test = ft_split(str, '-');
	free(str);
	int j = 0;
	if (test[0] == NULL)
	{
		printf("NULL");
		return (0);
	}
	while (j < 39 && test[j] != NULL)
	{
		printf("%s",test[j]);
		printf("\n");
		j++;
	}
	if (test[j] == NULL)
	{
		printf("yeah\n");
		printf("j = %d", j);
	}
	for(int i = 0; test[i]; i++)
	{
		free(test[i]);
	}
	free(test);
} */
