/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourey <vmourey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:16:40 by vmourey           #+#    #+#             */
/*   Updated: 2025/11/20 10:27:21 by vmourey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>
#include <string.h>

void del(void *content)
{
	content = NULL;
}

int main()
{
	t_list *a = ft_lstnew((void*)"char");
	t_list *b = ft_lstnew((void*)"tot");
	t_list *c = ft_lstnew((void*)"arr");
	a->next = b;
	b->next = c;
	
	printf("Before : %s ", (char*)a->content);
	printf("%p\n", (int*)a->next);
	printf("%s ", (char*)b->content);
	printf("%p\n", (int*)b->next);
	printf("%s ", (char*)c->content);
	printf("%p\n", (int*)c->next);

	ft_lstdelone(b, del);
	
	printf("After : %s ", (char*)a->content);
	printf("%p\n", (int*)a->next);
	printf("%s ", "supprime");
	printf("%p\n", (int*)b->next); // (int *)(b->next)->content seg fault
	printf("%s ", (char*)c->content);
	printf("%p\n", (int*)c->next);
} */
