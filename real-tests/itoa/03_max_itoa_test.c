/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_max_itoa_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:21:10 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 16:21:14 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	max_itoa_test(void)
{
	if (ft_strcmp(ft_itoa(2147483647), "2147483647") == 0)
		return (0);
	else
		return (-1);
}
