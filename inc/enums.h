/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enums.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda_cruz <gda_cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:08:51 by gda_cruz          #+#    #+#             */
/*   Updated: 2023/03/15 11:57:23 by gda_cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENUMS_H
# define ENUMS_H

enum e_state
{
	IN_Q,
	IN_DQ,
	IN_CURLY,
	DEF
};

enum e_token_type
{
	DEF_CHAR	= -1,
	SPACE_CHAR	= ' ',
	USD_CHAR	= '$',
	QM_CHAR		= '?',
	PIPE_CHAR	= '|',
	AND_CHAR	= '&',
	SC_CHAR		= ';',
	QUOTE_CHAR	= '\'',
	DQUOTE_CHAR	= '\"',
	INRED_CHAR	= '<',
	OUTRED_CHAR	= '>',
	ESC_CHAR	= '\\',
	OP_CHAR		= '(',
	CP_CHAR		= ')',
	OCB_CHAR	= '{',
	CCB_CHAR	= '}',
	NULL_CHAR	= '\0',
	TOKEN		= -1
};

enum e_ast_type
{
	AST_PIPE	= (1 << 0),
	AST_SEQ		= (1 << 1),
	AST_AND		= (1 << 2),
	AST_OR		= (1 << 3),
	AST_RED		= (1 << 4),
	AST_RED_IN	= (1 << 5),
	AST_RED_HD	= (1 << 6),
	AST_RED_TR	= (1 << 7),
	AST_RED_AP	= (1 << 8),
	AST_CMD		= (1 << 9),
	AST_ARG		= (1 << 10),
	AST_DATA	= (1 << 11)
};

#endif