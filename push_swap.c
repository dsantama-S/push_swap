/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:24:52 by dsantama          #+#    #+#             */
/*   Updated: 2021/05/14 13:30:17 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(t_data *data)
{
	push_b(data);
	push_b(data);
	push_b(data);
	push_b(data);
	push_b(data);
	rotate_b(data);
}

void init(char **argv, t_data *data)
{
	char *a;
	char *b;
	int n;
	int i;
	
	i = 1;
	n = ft_strlen(*argv) - 1;
	b = malloc(n);
	a = malloc(n);
	n = 0;
	while(argv[i] != '\0')
	{
		a[n] = *argv[i];
		i++;
		n++;
	}
	data->num = 0;
	data->a = a;
	data->b = b;
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
		if (n == 0)
		{
			printf("Error\n");
			break ;
		}
		i++;
	}
	if(argc < 2)
		printf("Error\n");
	init(argv, data);
	free(data);
}
