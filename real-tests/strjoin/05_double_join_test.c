/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_double_join_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:09:32 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 18:11:14 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	double_join_test(void)
{
	if (ft_strcmp(ft_strjoin("Joining ", ft_strjoin("like ", "crazy")),
				"Joining like crazy") == 0)
		return (0);
	else
		return (-1);
}
