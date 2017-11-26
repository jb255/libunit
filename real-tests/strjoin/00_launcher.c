/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:33:33 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 18:14:25 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_proto.h"
#include <stdlib.h>
#include <unistd.h>

int	strjoin_launcher(void)
{
	t_test_chain	*testlist;

	testlist = malloc(sizeof(t_test_chain));
	init(testlist, &join_basic_test, "Basic test");
	initnewlink(testlist, &join_second_empty_test, "Second elem empty test");
	initnewlink(testlist, &join_first_empty_test, "First elem empty test");
	initnewlink(testlist, &join_both_empty_test, "Both elem empty test");
	initnewlink(testlist, &double_join_test, "Double join test");
	initnewlink(testlist, &space_double_join_test, "Space double join");
	return (launch_tests(testlist, "STRJOIN"));
}
