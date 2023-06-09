/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ediaz--c <ediaz--c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:13:59 by ediaz--c          #+#    #+#             */
/*   Updated: 2023/05/11 13:35:20 by ediaz--c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	ft_get_max_index(t_list *stack, int index)
{
	int		value;
	int		pos;

	pos = 1;
	value = 0;
	while (stack)
	{
		if (index == stack->index)
			break ;
		pos++;
		stack = stack->next;
	}
	return (pos);
}

void	ft_min_num_five(t_list **stack, int index)
{
	int		max_index;
	int		size;

	size = ft_lstsize(*stack);
	max_index = ft_get_max_index(*stack, index);
	if (max_index == 1)
		return ;
	else if (max_index == 2)
		sa(stack);
	else if (max_index == 3)
	{
		ra(stack);
		ra(stack);
	}
	else if (index == 0 && max_index == 4)
	{
		rra(stack);
		rra(stack);
	}
	else if ((max_index == 4 && index == 1) || (max_index == 5 && index == 0))
		rra(stack);
}
