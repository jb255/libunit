/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:33:33 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 15:38:24 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_proto.h"
#include <stdlib.h>
#include <unistd.h>

int	strtrim_launcher(void)
{
	t_test_chain	*testlist;

	testlist = malloc(sizeof(t_test_chain));
	init(testlist, &basic_trim_test, "Basic test");
	initnewlink(testlist, &advanced_trim_test, "Advanced trim test");
	initnewlink(testlist, &no_trim_test, "No trim test");
	initnewlink(testlist, &blank_trim_test, "Blank test");
	return (launch_tests(testlist, "STRTRIM"));
}
