/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 13:52:28 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/13 08:51:28 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <stdio.h>

int		main(void)
{
	int divider = 20;
	int number = 2521;

	while (divider)
	{
		if (number % divider)
		{
			divider = 20;
			number++;
		}
		else
			divider--;
	}
	printf("%d\n", number);
	return (0);
}