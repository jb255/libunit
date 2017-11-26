/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:14:23 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 18:26:58 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libunit.h"

int	child_process(t_test_chain *testlist)
{
	int		(*temp)(void);

	temp = testlist->test;
	exit(temp() + 1);
}

int	handle_signal(int status)
{
	if (WIFEXITED(status) == 1)
	{
		if (WEXITSTATUS(status) == 1)
		{
			ft_putstr(": \e[1;32m[OK]\e[1;0m\n");
			return (1);
		}
		else
			ft_putstr(": \e[1;31m[KO] \e[1;0m\n");
	}
	else if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == 10)
			ft_putstr(": \e[1;31m[BUSE]\e[1;0m\n");
		else if (WTERMSIG(status) == 11)
			ft_putstr(": \e[1;31m[SEGV]\e[1;0m\n");
		else if (WTERMSIG(status) == 9)
			ft_putstr(": \e[1;31mProgram was killed\e[1;0m\n");
		else if (WTERMSIG(status) == )
			ft_putstr(": \e[1;31mProgram was killed\e[1;0m\n");
		else
			ft_putstr(": Something went very wrong\n");
	}
	return (0);
}

int	father_process(t_test_chain *testlist, int testpassed, int rounds)
{
	int		status;
	pid_t	father;

	father = fork();
	if (father < 0)
		exit(-1);
	else if (father == 0)
		return (child_process(testlist));
	ft_putstr(testlist->testname);
	wait(&status);
	testpassed += handle_signal(status);
	if (testlist->next != NULL)
		father_process(testlist->next, testpassed, ++rounds);
	else
	{
		ft_putstr("Tests passed: ");
		ft_putnbr(testpassed);
		ft_putstr("/");
		ft_putnbr(++rounds);
		ft_putstr("\n");
	}
	if (testpassed == rounds)
		return (0);
	return (-1);
}

int	launch_tests(t_test_chain *testlist, char *fname)
{
	ft_putstr("\n");
	ft_putstr(fname);
	ft_putstr(":\n\n");
	return (father_process(testlist, 0, 0));
}
