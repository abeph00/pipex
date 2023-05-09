/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertran <abertran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:56:57 by abertran          #+#    #+#             */
/*   Updated: 2023/05/09 14:51:14 by abertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
/* Child process that run inside a fork, take the filein, put the output inside
 a pipe and then close with the exec function */
void	child(char **av, char **envp, int *fd)
{
	int	filein;

	filein = open(av[1], O_RDONLY, 0777);
	if (filein == -1)
		error();
}

/* If the args and  everything works ok, runs the child and parent process */
int	main(int ac, char **av, char **envp)
{
	int		fd[2];
	pid_t	pid;

	if (ac == 5)
	{
		if (pipe(fd) == -1)
			error();
		pid = fork();
		if (pid == -1)
			error();
		if (pid == 0)
			child(av, envp, fd);
		
			
	}
}
