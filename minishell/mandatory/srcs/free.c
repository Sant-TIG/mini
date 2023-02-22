/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:50:19 by sperez-p          #+#    #+#             */
/*   Updated: 2023/02/22 11:50:20 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minishell.h"

void    ft_free_2d_str(char **str)
{
    int i;

    i = -1;
    while(str[++i])
        free(str[i]);
    free(str);
}

void ft_general_free(t_mini *minishell)
{
    if (minishell->minienv)
        ft_free_2d_str(minishell->minienv);
}