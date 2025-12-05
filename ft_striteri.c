/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:38:40 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 11:07:44 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	return ;
}

/* #include <stdio.h>

void f(unsigned int i, char *s)
{
	*s = s[0] + i;
}

int main()
{
	char str1[9] = "adiuaifao";
	ft_striteri(str1, f);
	printf("%s\n", str1);
} */
