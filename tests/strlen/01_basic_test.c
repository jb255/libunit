/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 22:32:36 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 12:47:17 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_proto.h"

int	basic_test(void)
{
	if (ft_strlen("Hello") == 5)
		return (0);
	else
		return (-1);
}
