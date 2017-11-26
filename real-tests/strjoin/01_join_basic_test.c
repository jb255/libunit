/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_join_basic_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:00:37 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 18:07:00 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	join_basic_test(void)
{
	if (ft_strcmp(ft_strjoin("Join ", "me"), "Join me") == 0)
		return (0);
	else
		return (-1);
}
