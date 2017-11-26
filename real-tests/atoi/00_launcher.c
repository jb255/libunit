/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:33:33 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 14:44:00 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_proto.h"
#include <stdlib.h>
#include <unistd.h>

int	atoi_launcher(void)
{
	t_test_chain	*testlist;

	testlist = malloc(sizeof(t_test_chain));
	init(testlist, &base_test, "Basic test");
	initnewlink(testlist, &max_int_test, "Max int test");
	initnewlink(testlist, &min_int_test, "Min int test");
	initnewlink(testlist, &blank_test, "Blank test");
	initnewlink(testlist, &zeroline_test, "Line of zero test");
	initnewlink(testlist, &plus_test, "With plus test");
	initnewlink(testlist, &char_after_test, "Char after int test");
	initnewlink(testlist, &giant_number_test, "Giant number test");
	initnewlink(testlist, &no_number_test, "No number test");
	return (launch_tests(testlist, "ATOI"));
}
