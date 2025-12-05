/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:18:07 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 10:29:00 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (new);
	new->content = content;
	new->next = NULL;
	return (new);
}

/* #include <stdio.h>

int main()
{
	t_list *a = ft_lstnew((void*)"char");
	printf("%s ", (char*)a->content);
	printf("%p", (int*)a->next);
} */