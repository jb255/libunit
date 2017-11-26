/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_neg_itoa_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:19:52 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 18:01:48 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	join_second_empty_test(void)
{
	if (ft_strcmp(ft_strjoin("Join", ""), "Join") == 0)
		return (0);
	else
		return (-1);
}
