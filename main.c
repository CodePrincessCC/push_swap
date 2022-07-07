/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 09:41:39 by candace       #+#    #+#                 */
/*   Updated: 2022/06/08 15:17:22 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	int *stackb;
	int *stacka;
	if (argc < 3) //program name and at least two integers, if less no point.
		return (0);
	stackb = errorchecks(argc, argv);
	stacka = indexarray(stackb, argc - 1);
	
}
