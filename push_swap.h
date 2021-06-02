/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:24:42 by dsantama          #+#    #+#             */
/*   Updated: 2021/06/02 09:45:21 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_data
{
	int							error;
	int							num;
	int							*a;
	int							*b;
	int							args_a;
	int							args_b;
}					t_data;

void 				init(char **argv, int argc, t_data *data);
void 				sort(t_data *data);
int 				push_b(t_data *data);
int 				push_a(t_data *data);
int					swap_b(t_data *data);
int 				swap_a(t_data *data);
void 				swap_ss(t_data *data);
void 				rev_rotate_a(t_data *data);
void 				rev_rotate_b(t_data *data);
void 				rotate_a(t_data *data);
void 				rotate_b(t_data *data);
void 				rotate_rr(t_data *data);
void 				rotate_rrr(t_data *data);
#endif
