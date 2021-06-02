/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sw_ps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:01:25 by dsantama          #+#    #+#             */
/*   Updated: 2021/06/02 09:46:12 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int swap_a(t_data *data)
{
	int		i;
	int		n;

	i = 0;
	while(data->a[i] != '\0')
		i++;
	if (i == 0 || i == 1)
		return (0);
	n = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = n;
	printf("sa\n");
	return (0);
}

int swap_b(t_data *data)
{
	int		i;
	int		n;

	i = 0;
	while(data->b[i] != '\0')
		i++;
	if (i == 0 || i == 1)
		return (0);
	n = data->b[0];
	data->b[0] = data->b[1];
	data->b[1] = n;
	printf("sb\n");
	return (0);
}

int push_b(t_data *data)
{
	int		i;
	int		n;
	int		change;

	i = 0;
	n = data->num;
	change = data->a[0];
	if (data->args_a == 0)
		return (0);
	if (data->args_a == 1 && data->args_b == 0)
	{
		data->b[0] = data->a[1];
		data->args_a--;
		data->args_b++;
		printf("pb\n");
		return (0);
	}
	while(data->a[i] != '\0')
	{
		data->a[i] = data->a[i + 1];
		i++;
	}
	if (data->num == 0)
		data->b[1] = data->b[0];
	data->b[data->num] = change;
	while(n > 0)
	{
		change = data->b[n];
		data->b[n] = data->b[n - 1];
		data->b[n - 1] = change;
		n--;
	}
	data->num++;
	data->args_a--;
	data->args_b++;
	printf("pb\n");
	return (0);
}

int push_a(t_data *data)
{
	int		i;
	int		n;
	int		change;

	i = 0;
	n = data->num;
	change = data->b[0];
	if (data->args_b == 0)
		return (0);
	if (data->args_b == 1 && data->args_a == 0)
	{
		data->a[0] = data->b[1];
		data->args_b--;
		data->args_a++;
		printf("pa\n");
		return (0);
	}
	while(data->b[i] != '\0')
	{
		data->b[i] = data->b[i + 1];
		i++;
	}
	if (data->num == 0)
		data->a[1] = data->a[0];
	data->a[data->num] = change;
	while(n > 0)
	{
		change = data->a[n];
		data->a[n] = data->a[n - 1];
		data->a[n - 1] = change;
		n--;
	}
	data->num++;
	data->args_b--;
	data->args_a++;
	printf("pa\n");
	return (0);
}

void rotate_rrr(t_data *data)
{
	rev_rotate_a(data);
	rev_rotate_b(data);
}