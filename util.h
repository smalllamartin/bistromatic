/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brabo-hi <brabo-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 10:28:01 by brabo-hi          #+#    #+#             */
/*   Updated: 2018/01/14 11:40:09 by brabo-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# include "header.h"
# include "helper.h"

char		*copy(char *str);
int			compare(char *base, char *num1, char *num2);
t_env		*new_env(char *num1, char *num2);
t_nb		*new_nb(int *len, int *res);
void		init_sign(char **num1, char **num2, char *sign1, char *sign2);

#endif
