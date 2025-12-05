/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:30:59 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/28 17:39:28 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
	return ;
}

/* #include <stdio.h>

int main()
{
	t_list *a = ft_lstnew((void*)"char");
	t_list *b = ft_lstnew((void*)"tot");
	t_list *c = ft_lstnew((void*)"arr");
	a->next = b;
	
	printf("Before : %s ", (char*)a->content);
	printf("%p\n", (int*)a->next);
	printf("%s ", (char*)(a->next)->content);
	printf("%p\n", (int*)(a->next)->next);
	
	ft_lstadd_front(&a, c);
	
	printf("After : %s ", (char*)a->content);
	printf("%p\n", (int*)a->next);
	printf("%s ", (char*)(a->next)->content);
	printf("%p\n", (int*)(a->next)->next);
	printf("%s ", (char*)((a->next)->next)->content);
	printf("%p\n", (int*)((a->next)->next)->next);
} */
