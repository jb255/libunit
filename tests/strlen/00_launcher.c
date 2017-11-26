/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:33:33 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 14:54:30 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_proto.h"
#include <stdlib.h>

int	strlen_launcher(void)
{
	t_test_chain	*testlist;

	testlist = malloc(sizeof(t_test_chain));
	init(testlist, &basic_test, "Basic test");
	initnewlink(testlist, &null_test, "NULL test");
	initnewlink(testlist, &bigger_str_test, "Bigger str test");
	initnewlink(testlist, &twentyone_chars_test, "21 char test");
	return (launch_tests(testlist, "STRLEN"));
}
