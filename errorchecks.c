/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   errorchecks.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/08 14:07:19 by candace       #+#    #+#                 */
/*   Updated: 2022/06/08 15:45:13 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	*errorchecks(int argc, char **argv)
{
	int		*list; // array of integers
	long	n; // index used for "numbers"
	long	temp; // temporary variable for holding possible longs

	n = 0;
	list = malloc(sizeof(int) * (argc - 1));
	if(list == NULL)
		return (NULL);
	while (n != argc - 1)
	{
		if (ft_isdigitstr(argv[n + 1]) == -1)
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
	n++;
	}
	
	n = 0;// reinitializing the counter
	while (n < argc - 1)
	{
		temp = ft_atoi(argv[n + 1]);
		if (temp < INT_MIN || temp > INT_MAX)
			{
			printf("Error\n");
			exit(EXIT_FAILURE);
			}
		list[n] = temp;
		if (isduplicate(list, n, list[n]) == 1) 
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		n++;
	}
	return (list);
}
