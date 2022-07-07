/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   isdigitstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 14:39:18 by candace       #+#    #+#                 */
/*   Updated: 2022/05/30 14:42:22 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
int	ft_isdigitstr(char *str)
{
	int c;
	c = 0;
	if (str[c] >= 48 && str[c] <= 57)
		return (c >= 48 && c <= 57);
	else 
		return (-1);	
}
