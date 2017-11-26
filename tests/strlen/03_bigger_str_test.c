/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:46:34 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 12:52:39 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_proto.h"

int	bigger_str_test(void)
{
	if (ft_strlen("What the fuck did you just fucking sa") == 36)
		return (0);
	else
		return (-1);
}
