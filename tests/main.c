/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:37:44 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 14:51:50 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "test_proto.h"

int	main(void)
{
	write(1, "*********************************\n", 34);
	write(1, "****     42 - Unit Tests     ****\n", 34);
	write(1, "*********************************\n", 34);
	strlen_launcher();
	return (0);
}
