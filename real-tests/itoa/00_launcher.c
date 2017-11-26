/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:33:33 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 16:43:28 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_proto.h"
#include <stdlib.h>
#include <unistd.h>

int	itoa_launcher(void)
{
	t_test_chain	*testlist;

	testlist = malloc(sizeof(t_test_chain));
	init(testlist, &basic_itoa_test, "Basic test");
	initnewlink(testlist, &neg_itoa_test, "Negative test");
	initnewlink(testlist, &max_itoa_test, "Max int test");
	initnewlink(testlist, &min_itoa_test, "Min int test");
	return (launch_tests(testlist, "ITOA"));
}
