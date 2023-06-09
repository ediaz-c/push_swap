/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:11:41 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/08 13:21:30 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 1;
	if (!lst)
		return (0);
	if (lst->next == NULL)
		return (1);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
