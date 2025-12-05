/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:57:22 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 10:30:00 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* #include <stdio.h>

int main()
{
	t_list *a = ft_lstnew((void*)"char");
	t_list *b = ft_lstnew((void*)"tot");
	t_list *c = ft_lstnew((void*)"arr");
	a->next = b;
	b->next = c;
	
	printf("%d", ft_lstsize(a));
} */
