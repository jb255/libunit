/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_advanced_trim_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:26:43 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 15:36:31 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	advanced_trim_test(void)
{
	if (ft_strcmp(ft_strtrim(" \t\n\n\nPlease trim me \n\n\n\t  "),
				"Please trim me") == 0)
		return (0);
	else
		return (-1);
}
