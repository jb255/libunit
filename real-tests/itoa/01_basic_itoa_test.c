/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_alpha_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:07:15 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 16:23:52 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	basic_itoa_test(void)
{
	if (ft_strcmp(ft_itoa(42), "42") == 0)
		return (0);
	else
		return (-1);
}
