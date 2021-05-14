/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sw_ps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:01:25 by dsantama          #+#    #+#             */
/*   Updated: 2021/05/14 11:33:23 by dsantama         ###   ########.fr       */
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
	char	c;

	i = ft_strlen(data->a);
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
	data->num++;
	printf("%s\n%s\n", data->a, data->b);
	printf("pb\n");
	return (0);
}