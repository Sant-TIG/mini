/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sperez-p <sperez-p@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:49:33 by sperez-p          #+#    #+#             */
/*   Updated: 2023/02/22 11:49:34 by sperez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/minishell.h"

char	*ft_search_variable(char **env, char *var, t_mini *minishell)
{
	int	i;
	size_t	var_len;

	i = -1;
	var_len = ft_strchr(var, '=');
	while(env[++i])
	{
		if (ft_strnstr(env[i], var, var_len))
			// cambiar valor variable
			free(env[i]);
			env[i] = ft_strdup(var, minishell);
	}
	//crear nueva variable
}

/*char	**ft_export_variable(char **env, char *new_var)
{*/
	/* 
	 * Primero buscamos si la variable que queremos exportar existe. Si no existe,
	 * creamos una variable nueva y la añadimos al environment. Si existe sobreescribe
	 * su valor actual por el nuevo introducido por el usuario. 
	 */
//}

int main(int argc, char **argv, char **envp)
{
	t_mini   minishell;
	int		i;

	i = 0;
	printf("%d\n%s\n", argc, argv[0]);
	printf("\n\nANTES DE COPIAR\n\n");
	ft_print2dstr(envp);
	
	printf("\n\nDESPUES DE COPIAR\n\n");
	minishell.minienv = ft_2dstrdup((const char **)envp, &minishell);
	ft_print2dstr(minishell.minienv);
	
	printf("\n\nDESPUES DE QUINO\n\n");
	char	**prueba = envp;
	ft_print2dstr(prueba);
	return (0);
}