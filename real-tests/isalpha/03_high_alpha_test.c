/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_high_alpha_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:07:23 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 16:07:25 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	high_alpha_test(void)
{
	if (ft_isalpha(450) == 0)
		return (0);
	else
		return (-1);
}
