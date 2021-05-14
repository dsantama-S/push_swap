/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 10:24:42 by dsantama          #+#    #+#             */
/*   Updated: 2021/05/14 11:31:51 by dsantama         ###   ########.fr       */
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
	char						*a;
	char						*b;
}					t_data;

void 				init(char **argv, t_data *data);
void 				sort(t_data *data);
int 				push_b(t_data *data);
int					swap_b(t_data *data);
int 				swap_a(t_data *data);
#endif
