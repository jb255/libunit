/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:33:33 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 17:40:21 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_proto.h"
#include <stdlib.h>
#include <unistd.h>

int	isalpha_launcher(void)
{
	t_test_chain	*testlist;

	testlist = malloc(sizeof(t_test_chain));
	init(testlist, &basic_alpha_test, "Basic test");
	initnewlink(testlist, &negative_alpha_test, "Negative int test");
	initnewlink(testlist, &high_alpha_test, "High int test");
	return (launch_tests(testlist, "ISALPHA"));
}
