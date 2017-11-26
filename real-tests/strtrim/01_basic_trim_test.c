/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_trim_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:07:33 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 15:36:34 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	basic_trim_test(void)
{
	if (ft_strcmp(ft_strtrim(" Please trim me "), "Please trim me") == 0)
		return (0);
	else
		return (-1);
}
