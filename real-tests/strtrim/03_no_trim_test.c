/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_no_trim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:26:16 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 15:36:52 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	no_trim_test(void)
{
	if (ft_strcmp(ft_strtrim("No trim here"), "No trim here") == 0)
		return (0);
	else
		return (-1);
}
