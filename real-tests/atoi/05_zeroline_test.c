/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_zeroline_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 13:29:46 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 13:30:10 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_proto.h"

int	zeroline_test(void)
{
	if (ft_atoi("-0000006050") == -6050)
		return (0);
	else
		return (-1);
}
