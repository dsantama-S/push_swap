/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:24:52 by dsantama          #+#    #+#             */
/*   Updated: 2021/05/24 12:09:11 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(t_data *data)
{
	swap_a(data);
	push_b(data);
	push_b(data);
	rev_rotate_a(data);
	push_b(data);
	push_b(data);
	rev_rotate_b(data);
	rotate_b(data);
	push_a(data);
	push_a(data);
	rotate_a(data);
}

void init(char **argv, int argc, t_data *data)
{
	char **a;
	char **b;
	int n;
	int i;
	
	i = 1;
	b = malloc(argc * sizeof(*argv));
	a = malloc(argc * sizeof(*argv));
	n = 0;
	while(argv[i] != '\0')
	{
		a[n] = argv[i];
		i++;
		n++;
	}
	i = 0;
	data->num = 0;
	data->a = malloc(argc * sizeof(*argv));
	data->b = malloc(argc * sizeof(*argv));
	while(i < argc - 1)
	{
		data->a[i] = ft_atoi(a[i]);
		i++;
	}
	data->args_a = argc - 1;
	data->args_b = 0;
	sort(data);
}

int main(int argc, char **argv)
{
	int i;
	int n;
	t_data *data;
	
	data = ((t_data *)malloc(sizeof(t_data)));
	if (!data)
		return (0);
	i = 1;
	while(argv[i] != '\0')
	{
		n = ft_isdigit(*argv[i]);
		if (n == 0 && *argv[i] != '-' && *argv[i] != '+')
		{
			printf("Error\n");
			break ;
		}
		i++;
	}
	if(argc < 2)
		printf("Error\n");
	init(argv, argc, data);
	free(data);
}
