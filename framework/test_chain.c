/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_chain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 10:47:54 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 14:56:51 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdlib.h>

void	init(t_test_chain *newlink, int (*test)(void), char *testname)
{
	newlink->testname = testname;
	newlink->test = test;
	newlink->next = NULL;
}

void	initnewlink(t_test_chain *chain, int (*test)(void), char *testname)
{
	t_test_chain	*newlink;

	newlink = chain;
	while (newlink->next != NULL)
		newlink = newlink->next;
	newlink->next = malloc(sizeof(t_test_chain));
	init(newlink->next, test, testname);
}

void	freelink(t_test_chain *link)
{
	t_test_chain	*newlink;
	t_test_chain	*tofree;

	newlink = link;
	while (newlink->next != NULL)
	{
		tofree = newlink;
		newlink = newlink->next;
		free(tofree);
	}
	free(newlink);
}
