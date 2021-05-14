/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sw_ps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:01:25 by dsantama          #+#    #+#             */
/*   Updated: 2021/05/14 13:22:26 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int swap_a(t_data *data)
{
	int		i;
	char	c;

	i = ft_strlen(data->a);
	if (i == 0 || i == 1)
		return (0);
	c = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = c;
	printf("sa\n");
	return (0);
}

int swap_b(t_data *data)
{
	int		i;
	char	c;

	i = ft_strlen(data->b);
	if (i == 0 || i == 1)
		return (0);
	c = data->b[0];
	data->b[0] = data->b[1];
	data->b[1] = c;
	printf("sb\n");
	return (0);
}

int push_b(t_data *data)
{
	int		i;
	int		n;
	char	c;

	i = ft_strlen(data->a);
	n = data->num;
	if (i == 0)
		return (0);
	i = 0;
	c = data->a[0];
	while(data->a[i] != '\0')
	{
		data->a[i] = data->a[i + 1];
		i++;
	}
	data->b[data->num] = c;
	while(n > 0)
	{
		c = data->b[n];
		data->b[n] = data->b[n - 1];
		data->b[n - 1] = c;
		n--;
	}
	data->num++;
	printf("pb\n");
	return (0);
}

int push_a(t_data *data)
{
	int		i;
	int		n;
	char	c;

	i = ft_strlen(data->b);
	n = data->num;
	if (i == 0)
		return (0);
	i = 0;
	c = data->b[0];
	while(data->b[i] != '\0')
	{
		data->b[i] = data->b[i + 1];
		i++;
	}
	data->a[data->num] = c;
	while(n > 0)
	{
		c = data->a[n];
		data->a[n] = data->a[n - 1];
		data->a[n - 1] = c;
		n--;
	}
	data->num++;
	printf("pa\n");
	return (0);
}