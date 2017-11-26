/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 20:37:44 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 18:25:58 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "test_proto.h"

#include <string.h>

int	main(int argc, char *argv[])
{
	write(1, "*********************************\n", 34);
	write(1, "****     42 - Unit Tests     ****\n", 34);
	write(1, "*********************************\n", 34);
	if (argc != 2)
	{
		write(1, "chose basic, bonnus or all\n", 27);
		return (0);
	}
	if (ft_strcmp(argv[1], "basic") == 0 || ft_strcmp(argv[1], "all") == 0)
	{
		strlen_launcher();
		atoi_launcher();
		strtrim_launcher();		
	}
	if ((ft_strcmp(argv[1], "bonnus") == 0 || ft_strcmp(argv[1], "all") == 0))
	{
		isalpha_launcher();
		itoa_launcher();
		strjoin_launcher();
	}
	return (0);
}
