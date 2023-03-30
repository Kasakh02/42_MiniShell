/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gda_cruz <gda_cruz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:00:23 by gda_cruz          #+#    #+#             */
/*   Updated: 2023/03/15 13:58:15 by gda_cruz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

/* Recursive command check for the cmd_line syntax block */
t_ast	*cmd_line(void)
{
	t_token	*backup;
	t_ast	*new_node;

	backup = g_data.token;
	g_data.token = backup;
	new_node = cmd_line1();
	if (new_node)
		return (new_node);
	g_data.token = backup;
	new_node = cmd_line2();
	if (new_node)
		return (new_node);
	g_data.token = backup;
	new_node = cmd_line3();
	if (new_node)
		return (new_node);
	return (NULL);
}

/* Check case <and or> ';' <command line> */
t_ast	*cmd_line1(void)
{
	// t_ast	*ast_and_or;
	// t_ast	*ast_cmd_line;
	// t_ast	*result;

	*g_data.ast_root = NULL;
	and_or();
	return (NULL);
}

/* Check case <and or> ';' */
t_ast	*cmd_line2(void)
{
	return (NULL);
}

/* Check case <and or> */
t_ast	*cmd_line3(void)
{
	return (NULL);
}
