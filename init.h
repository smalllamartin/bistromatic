/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brabo-hi <brabo-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 03:06:55 by brabo-hi          #+#    #+#             */
/*   Updated: 2018/01/15 04:03:10 by brabo-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "header.h"
# include "queue.h"
# include "helper.h"
# include "parse.h"
# include "stack.h"
# include "set.h"
# include "validate.h"

void		init_set_minus(char *plus);
int			set_add_sub(t_queue **head, char *base, char *in);
int			init_set_add_sub(char *data, char sign, int *len);
void		init_parse_init(int	**len, int **res, t_nb *nb);
char		*init_multiply(int carry, char *out, int j);

#endif
