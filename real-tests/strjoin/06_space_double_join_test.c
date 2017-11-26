/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_space_double_join_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:12:37 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 18:12:59 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/test_proto.h"

int	space_double_join_test(void)
{
	if (ft_strcmp(ft_strjoin("Joining", ft_strjoin(" ", "tricky stuff")),
				"Joining tricky stuff") == 0)
		return (0);
	else
		return (-1);
}
