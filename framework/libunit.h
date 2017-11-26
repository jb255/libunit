/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 01:54:06 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 14:47:22 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __LIBUNIT_H
# define __LIBUNIT_H

typedef	struct	s_test_chain
{
	int					(*test)(void);
	char				*testname;
	struct s_test_chain	*next;
}				t_test_chain;

void			freelink(t_test_chain *link);

void			init(t_test_chain *newlink, int (*test)(void), char *testname);

void			initnewlink(t_test_chain *chain, int (*test)(void),
		char *testname);

void			ft_putstr(char *str);

void			ft_putnbr(int nbr);

#endif
