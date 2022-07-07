/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 10:21:18 by candace       #+#    #+#                 */
/*   Updated: 2022/06/08 16:39:21 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
long	ft_atoi(char *str)
{
	long	res;
	long	cnt;
	long	pos;

	res = 0;
	cnt = 0;
	pos = 1;
	while (str[cnt] == '\n' || str[cnt] == ' ' || str[cnt] == '\t'
		|| str[cnt] == '\v' || str[cnt] == '\f' || str[cnt] == '\r')
		cnt++;
	if (str[cnt] == '-')
	{
		pos = -1;
		cnt++;
	}
	else if (str[cnt] == '+')
		cnt++;
	while (str[cnt] >= '0' && str[cnt] <= '9')
	{
		res = res * 10 + str[cnt] - '0';
		cnt++;
	}
	return (res * pos);
}

int	ft_isdigitstr(char *str)
{
	int c;
	c = 0;
	while (str[c] != '\0')
	{
		if(str[c] == 45)
		c++;
		if(str[c] < 48 || str[c] > 57) 
		{
			return (-1);
		}
		c++;
	}
	return (0);
}
int isduplicate(int *array, int size, int value)
{
    int cnt;
    cnt = 0;
    while (cnt < size) 
	{
		if ( array[cnt] == value)
		{
			return (1);
		}
		cnt++;
	}
	return (0);
}

int	*indexarray( int *array, int size)
{
	int	*arrayout;
	int	cnt;
	int cnt2;
	int	lowest;
	int used;

	cnt2 = 0;
	lowest = 0;
	used = INT_MIN;
	if (array == NULL)
		return (NULL);
	arrayout = malloc(sizeof(int) * size);
	if(arrayout == NULL)
		return (NULL);
	while (cnt2 < size)
	{
		cnt = 0;
		while (cnt < size)
		{
			if (array[cnt] < array[lowest] && array[cnt] >= used)
				lowest = cnt;
			cnt++;
		}
		arrayout[lowest] = cnt2;
		used = array[lowest] + 1;
	cnt2++;
	}
	return (arrayout);
}
