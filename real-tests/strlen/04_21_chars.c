/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_21_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 10:12:06 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 12:59:17 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_proto.h"

int	twentyone_chars_test(void)
{
	if (ft_strlen("21 is half of 42 yooo") == 21)
		return (0);
	else
		return (-1);
}