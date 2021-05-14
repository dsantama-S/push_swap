/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 12:43:18 by dsantama          #+#    #+#             */
/*   Updated: 2021/05/14 13:22:49 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rev_rotate_a(t_data *data)
{
	int		n;
	char	c;

	n = ft_strlen(data->a) - 1;
	c = data->a[n];
	while(n > 0)
	{
		data->a[n] = data->a[n - 1];
		n--;
	}
	data->a[0] = c;
	printf("rra\n");
}

void rev_rotate_b(t_data *data)
{
	int		n;
	char	c;

	n = ft_strlen(data->b) - 1;
	c = data->b[n];
	while(n > 0)
	{
		data->b[n] = data->b[n - 1];
		n--;
	}
	data->b[0] = c;
	printf("rrb\n");
}

void rotate_a(t_data *data)
{
	int		i;
	int		n;
	char	c;

	i = 0;
	n = ft_strlen(data->a) - 1;
	c = data->a[0];
	while(i < n)
	{
		data->a[i] = data->a[i + 1];
		i++;
	}
	data->a[n] = c;
	printf("ra\n");
}

void rotate_b(t_data *data)
{
	int		i;
	int		n;
	char	c;

	i = 0;
	n = ft_strlen(data->b) - 1;
	c = data->b[0];
	while(i < n)
	{
		data->b[i] = data->b[i + 1];
		i++;
	}
	data->b[n] = c;
	printf("rb\n");
}