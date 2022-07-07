/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pushswap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 10:23:45 by candace       #+#    #+#                 */
/*   Updated: 2022/06/08 14:49:03 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}				t_list;
long	ft_atoi(char *str);
int	ft_isdigitstr(char *str);
int	isduplicate(int *array, int size, int value);
int	*errorchecks(int argc, char **argv);
#endif