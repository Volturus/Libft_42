/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:13:17 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/25 14:52:04 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	retour;
	int	signe;
	int	i;
	int	test_s;

	i = 0;
	signe = 1;
	retour = 0;
	test_s = 0;
	while (str[i] == 9 || str[i] == 10 || \
str[i] == 11 || str[i] == 12 || str[i] == 13)
		i++;
	if (str[i] == '-')
		signe = (-1) * signe;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && test_s < 2)
	{
		retour = retour * 10 + (str[i] - 48);
		i++;
	}
	return (retour * signe);
}

/* #include <stdlib.h>
#include <stdio.h>

int main( void )
{
    char    *str = NULL;
    int     value = 0;

    // An example of the atoi function.
    str = " -245";
    value = ft_atoi( str );
    printf( "Function: atoi( \"%s\" ) = %d\n", str, value );

    // Another example of the atoi function.
    str = "3141276";
    value = ft_atoi( str );
    printf( "Function: atoi( \"%s\" ) = %d\n", str, value );
} */
