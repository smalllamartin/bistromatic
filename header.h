/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brabo-hi <brabo-hi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:38:01 by brabo-hi          #+#    #+#             */
/*   Updated: 2018/01/13 07:32:03 by brabo-hi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# include "libft/libft.h"

# define IS_IN_STR(base, c) (ft_strrchr(base, c))

# define IS_BRAKET(c) (IS_IN_STR("()", c))
# define IS_OPERATOR(c) (IS_IN_STR("+-*/%", c))
# define IS_OPERATOR_1(c) (IS_ADD(c) || IS_SUB(c))
# define IS_OPERATOR_2(c) (IS_MUL(c) || IS_DIV(c) || IS_MOD(c))
# define IS_OPERAND(base, c) (IS_IN_STR(base, c))

# define IS_VALID(b, c) (IS_OPERAND(b, c) || IS_OPERATOR(c) || IS_BRAKET(c))

# define ADD '+'
# define SUB '-'
# define MUL '*'
# define DIV '/'
# define MOD '%'
# define OPEN '('
# define CLOSE ')'

# define IS_ADD(c) (c == ADD)
# define IS_SUB(c) (c == SUB)
# define IS_MUL(c) (c == MUL)
# define IS_DIV(c) (c == DIV)
# define IS_MOD(c) (c == MOD)
# define IS_OPEN(c) (c == OPEN)
# define IS_CLOSE(c) (c == CLOSE)

# define IS_START(base, c) (IS_OPERAND(base, c) || IS_IN_STR("+-(", c))
# define IS_END(base, c) (IS_OPERAND(base, c) || IS_IN_STR(")", c))

# define NEXT_OPERAND(base, c) (c == '\0' || N_OP(base, c))
# define N_OP(base, c) (IS_OPERAND(base, c) || IS_IN_STR("+-*/%)", c))
# define NEXT_ADD(base, c) (IS_OPERAND(base, c) || IS_IN_STR("+-(", c))
# define NEXT_SUB(base, c) (IS_OPERAND(base, c) || IS_IN_STR("+-(", c))
# define NEXT_MUL(base, c) (IS_OPERAND(base, c) || IS_IN_STR("+-(", c))
# define NEXT_DIV(base, c) (IS_OPERAND(base, c) || IS_IN_STR("+-(", c))
# define NEXT_MOD(base, c) (IS_OPERAND(base, c) || IS_IN_STR("+-(", c))
# define NEXT_OPEN(base, c) (IS_OPERAND(base, c) || IS_IN_STR("+-(", c))
# define NEXT_CLOSE(base, c) (c == '\0' || IS_IN_STR("+-*/%)", c))

typedef enum		e_type
{
	OPERAND,
	OPERATOR_1,
	OPERATOR_2,
	BRACKET
}					t_type;

typedef	struct		s_env
{
	char			*num1;
	char			*num2;
	char			*base;
}					t_env;

typedef struct		s_nb
{
	int				*len;
	int				*res;
}					t_nb;

#endif
