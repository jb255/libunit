/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_proto.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmilon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 02:30:54 by tmilon            #+#    #+#             */
/*   Updated: 2017/11/26 18:13:14 by tmilon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TEST_PROTO_H
# define __TEST_PROTO_H
# include "libunit.h"

int		launch_tests(t_test_chain *testlist, char *fname);

int		strlen_launcher(void);

int		ft_strlen(char *str);

int		ft_strcmp(const char *s1, const char *s2);

int		basic_test(void);

int		null_test(void);

int		bigger_str_test(void);

int		twentyone_chars_test(void);

int		ft_atoi(char *str);

int		atoi_launcher(void);

int		base_test(void);

int		max_int_test(void);

int		min_int_test(void);

int		blank_test(void);

int		zeroline_test(void);

int		plus_test(void);

int		char_after_test(void);

int		giant_number_test(void);

int		no_number_test(void);

char	*ft_strtrim(char *str);

int		strtrim_launcher(void);

int		basic_trim_test(void);

int		advanced_trim_test(void);

int		no_trim_test(void);

int		blank_trim_test(void);

int		ft_isalpha(int);

int		isalpha_launcher(void);

int		basic_alpha_test(void);

int		negative_alpha_test(void);

int		high_alpha_test(void);

char	*ft_itoa(int n);

int		itoa_launcher(void);

int		basic_itoa_test(void);

int		neg_itoa_test(void);

int		max_itoa_test(void);

int		min_itoa_test(void);

char	*ft_strjoin(char const *s1, char const *s2);

int		strjoin_launcher(void);

int		join_basic_test(void);

int		join_second_empty_test(void);

int		join_first_empty_test(void);

int		join_both_empty_test(void);

int		double_join_test(void);

int		space_double_join_test(void);

#endif
