/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addition.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brabo-hi <brabo-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 04:29:06 by brabo-hi          #+#    #+#             */
/*   Updated: 2018/01/13 05:26:57 by brabo-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADDITION_H
# define ADDITION_H

# include "header.h"
# include "calcul.h"
# include "substraction.h"
# include "multiplication.h"
# include "division.h"
# include "modulos.h"

char		*addition(char *base, char *num1, char *num2);
void		addition_help(char *base, int *sum, int *carry, char *out);

#endif
