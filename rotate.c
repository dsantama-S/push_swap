/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:43:18 by dsantama          #+#    #+#             */
/*   Updated: 2021/06/02 09:45:29 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rev_rotate_a(t_data *data)
{
	int		n;
	int		change;

	n = data->args_a;
	change = data->a[n - 1];
	while(n > 0)
	{
		data->a[n] = data->a[n - 1];
		n--;
	}
	data->a[0] = change;
	printf("rra\n");
}

void rev_rotate_b(t_data *data)
{
	int		n;
	int		change;

	n = data->args_b;
	change = data->b[n - 1];
	while(n > 0)
	{
		data->b[n] = data->b[n - 1];
		n--;
	}
	data->b[0] = change;
	printf("rrb\n");
}

void rotate_a(t_data *data)
{
	int		i;
	int		n;
	int		change;

	i = 0;
	n = data->args_a;
	change = data->a[0];
	while(i < n)
	{
		data->a[i] = data->a[i + 1];
		i++;
	}
	data->a[n - 1] = change;
	printf("ra\n");
}

void rotate_b(t_data *data)
{
	int		i;
	int		n;
	int		change;

	i = 0;
	n = data->args_b;
	change = data->b[0];
	while(i < n)
	{
		data->b[i] = data->b[i + 1];
		i++;
	}
	data->b[n - 1] = change;
	printf("rb\n");
}

void rotate_rr(t_data *data)
{
	rotate_a(data);
	rotate_b(data);
}